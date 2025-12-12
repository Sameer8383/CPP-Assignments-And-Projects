#include <iostream>
#include <cstring>
using namespace std;

int gcd(int a, int b)
{
    for (int hcf = (a < b ? a : b); hcf >= 1; hcf--)
        if (a % hcf == 0 && b % hcf == 0)
            return hcf;
}
void printGcd(int a, int b)
{
    int hcf = gcd(a, b);

    cout << "\nGCD of " << a << " and " << b << " is: " << hcf << endl;
}
void f1()
{
    int a, b;

    cout << "\n*************************************************************************\n";
    cout << " Q1. Define a C++ function to calculate GCD of two numbers.\n";
    cout << "*************************************************************************\n\n";

    cout << "Enter Value of a: ";
    cin >> a;
    cout << "Enter Value of b: ";
    cin >> b;

    printGcd(a, b);

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 1                                 \n";
    cout << "*************************************************************************\n\n";
}
float volume(int length, int breadth, int height)
{
    return length * breadth * height;
}
float volume(float radius, float height)
{
    return (1.0f / 3.0f) * 3.14f * radius * radius * height;
}
float volume(float radius)
{
    return (4.0f / 3.0f) * 3.14f * radius * radius * radius;
}
void printVolumes(int l, int b, float h, float r, float h1)
{
    cout << "Volume of Cuboid (l = " << l << ", b = " << b << ", h = " << h << ") is: " << volume(l, b, h) << " cm^3" << endl;

    cout << "Volume of Cone (r = " << r << ", h = " << h1 << ") is: " << volume(r, h1) << " cm^3" << endl;

    cout << "Volume of Sphere (r = " << r << ") is: " << volume(r) << " cm^3" << endl;
}
void f2()
{
    cout << "\n*************************************************************************\n";
    cout << " Q2. Define overloaded functions to caculate volume of cubiod, cone and and sphere.\n";
    cout << "*************************************************************************\n\n";

    int length, breadth, heightCuboid;
    float radius, heightCone;

    cout << "Enter length, breadth and height of Cuboid: ";
    cin >> length >> breadth >> heightCuboid;

    cout << "Enter radius and height of Cone: ";
    cin >> radius >> heightCone;

    printVolumes(length, breadth, heightCuboid, radius, heightCone);

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 2                                 \n";
    cout << "*************************************************************************\n\n";
}
char *subString(char str[], int startIndex, int endIndex = -1)
{
    int j = 0;
    static char substr[100];

    if (endIndex == -1)
        endIndex = strlen(str);

    for (int i = startIndex; i < endIndex && str[i] != '\0'; i++)
    {
        substr[j++] = str[i];
    }
    substr[j] = '\0';

    return substr;
}
void printSubstring(char str[], int startIndex, int endIndex = -1)
{
    char *substr = subString(str, startIndex, endIndex);
    cout << "Substring: " << substr << endl;
}
void f3()
{
    cout << "\n*************************************************************************\n";
    cout << " Q3. Define a function to print a substring from stratIndex(inclusive) to -\n";
    cout << " endIndex(exclusive). Define function in such a way that if second argument is -\n";
    cout << "not provided, string will be print till the last possible index.\n";
    cout << "*************************************************************************\n\n";

    char str[100], choice[10];
    int startIndex, endIndex;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "\nEnter start index: ";
    cin >> startIndex;

    cin.ignore(1000, '\n');

    cout << "\nDo you want to provide end index? (yes/no): ";
    cin.getline(choice, 10);

    if (strcmp(choice, "Yes") == 0 || strcmp(choice, "yes") == 0)
    {
        cout << "\nEnter end index (-1 to print till end): ";
        cin >> endIndex;
        printSubstring(str, startIndex, endIndex);
    }
    else
    {
        printSubstring(str, startIndex);
    }

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 3                                 \n";
    cout << "*************************************************************************\n\n";
}
int swapArrays(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    return 0;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void f4()
{
    cout << "\n*************************************************************************\n";
    cout << " Q4. Define a function to swap two arrays of same size.\n";
    cout << "*************************************************************************\n\n";

    int size;

    cout << "Enter size of arrays: ";
    cin >> size;

    int arr1[100], arr2[100];
    cout << "\nEnter elements of first array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    cout << "\nEnter elements of second array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }

    cout << "\nArrays 1st before swapping:\n";
    printArray(arr1, size);

    cout << "\nArrays 2nd before swapping:\n";
    printArray(arr2, size);

    cout << "\nArrays before swapping:\n";
    swapArrays(arr1, arr2, size);
    cout << "\nArrays 1st after swapping: ";
    printArray(arr1, size);

    cout << "Arrays 2nd after swapping: ";
    printArray(arr2, size);

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 4                                 \n";
    cout << "*************************************************************************\n\n";
}
void sortedArray(int arr[], int size1, int arr1[], int size2)
{
    int round, i;

    for (round = 1; round < size1; round++)
    {
        for (i = 0; i < size1 - round; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (round = 1; round < size2; round++)
    {
        for (i = 0; i < size2 - round; i++)
        {
            if (arr1[i] > arr1[i + 1])
            {
                int temp = arr1[i];
                arr1[i] = arr1[i + 1];
                arr1[i + 1] = temp;
            }
        }
    }
}

void mergedArray(int arr[], int size, int arr1[], int size1)
{
    sortedArray(arr, size, arr1, size1);

    int i = 0, j = 0, k = 0;
    int mergeArray[100];

    for (k = 0; k < size; k++, i++)
    {
        mergeArray[k] = arr[i];
    }

    for (; k < size + size1; k++, j++)
    {
        mergeArray[k] = arr1[j];
    }

    cout << "\nMerged Sorted Array: ";
    printArray(mergeArray, size + size1);
}

void f5()
{
    cout << "\n*************************************************************************\n";
    cout << " Q5. Merge two sorted arrays to form a single sorted array.\n";
    cout << "*************************************************************************\n\n";

    int arr[100] = {5, 1, 3, 2, 4};
    int arr1[100] = {10, 8, 7, 9, 6};

    int size = 5;
    int size1 = 5;

    cout << "Array 1st before sorting: ";
    printArray(arr, size);

    cout << "Array 2nd before sorting: ";
    printArray(arr1, size1);

    sortedArray(arr, size, arr1, size1);

    cout << "\nArray 1st after sorting: ";
    printArray(arr, size);

    cout << "Array 2nd after sorting: ";
    printArray(arr1, size1);

    mergedArray(arr, size, arr1, size1);

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 5                                 \n";
    cout << "*************************************************************************\n\n";
}

int main()
{
    // f1();
    // f2();
    // f3();
    // f4();
     f5();
    return 0;
}
