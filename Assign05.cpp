#include <iostream>
using namespace std;

// Function to sort array (ascending or descending)
void sortArray(int arr[], int size, bool ascending = true)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (ascending && arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            else if (!ascending && arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Function to demonstrate sorting
void f1()
{
    cout << "\n*************************************************************************\n";
    cout << " Q1. Define a C++ functionto sort an array of integers in ascending or des-\n";
    cout << "     -cending order depending on booltype argument (true for ascending and" << endl;
    cout << "      false for descending). Use default argument to implement it. \n";
    cout << "*************************************************************************\n\n";

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << endl;

    cout << "Array Before Sorting     : ";
    printArray(arr, n);

    sortArray(arr, n);
    cout << "Array in Ascending Order : ";
    printArray(arr, n);

    sortArray(arr, n, false);
    cout << "Array in Descending Order: ";
    printArray(arr, n);

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 1                                 \n";
    cout << "*************************************************************************\n\n";
}

#include <cstring>

// Function to sort strings
void sortStringArray(char str[][50], int size, bool ascending = true)
{
    char temp[50];

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (ascending && strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
            else if (!ascending && strcmp(str[j], str[j + 1]) < 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
}

void printStringArray(char str[][50], int size)
{
    for (int i = 0; i < size; i++)
        cout << str[i] << " ";
    cout << endl;
}

void f2()
{
    cout << "\n*************************************************************************\n";
    cout << " Q2. Define a C++ function to sort an array of strings in ascending or des-\n";
    cout << "     -cending order depending on bool type argument (true for ascending and\n";
    cout << "      false for descending). Use default argument to implement it. \n";
    cout << "*************************************************************************\n\n";

    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    char str[n][50];
    cout << "Enter " << n << " strings: ";
    for (int i = 0; i < n; i++)
        cin >> str[i];

    cout << endl;

    cout << "Array Before Sorting      : ";
    printStringArray(str, n);

    sortStringArray(str, n);
    cout << "Array in Ascending Order  : ";
    printStringArray(str, n);

    sortStringArray(str, n, false);
    cout << "Array in Descending Order : ";
    printStringArray(str, n);

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 2                                 \n";
    cout << "*************************************************************************\n\n";
}

// Rotate array
void rotateArray(int arr[], int size, int d, int n)
{
    if (d == 1) // Right rotation
    {
        for (int r = 1; r <= n; r++)
        {
            int temp = arr[size - 1];
            for (int i = size - 1; i > 0; i--)
                arr[i] = arr[i - 1];

            arr[0] = temp;
        }
    }
    else if (d == -1) // Left rotation
    {
        for (int r = 1; r <= n; r++)
        {
            int temp = arr[0];
            for (int i = 1; i < size; i++)
                arr[i - 1] = arr[i];

            arr[size - 1] = temp;
        }
    }
}

void f3()
{
    int size, n, d;

    cout << "\n*************************************************************************\n";
    cout << " Q3. Define a function to rotate an array by n position int the 'd' direction\n";
    cout << "     Implement position and direction using default arguments. Arguments 'd'\n";
    cout << "     can be -1 or 1 denoting left or right directiion. Argument n should be \n";
    cout << "     the last argument with default value 1. \n";
    cout << "*************************************************************************\n\n";

    cout << "Enter array size: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "\nEnter direction (1 = right, -1 = left): ";
    cin >> d;

    cout << "\nEnter number of rotations: ";
    cin >> n;

    rotateArray(arr, size, d, n);

    cout << "\nArray after rotation: ";
    printArray(arr, size);

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 3.                                 \n";
    cout << "*************************************************************************\n\n";
}
int lcm(int a, int b, int c)
{
    int l;

    for (l = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c); l <= a * b * c; l++)
    {
        if (l % a == 0 && l % b == 0 && l % c == 0)
            break;
    }
    return l;
}
void printLcm(int a, int b, int c)
{
    int l = lcm(a, b, c);

    cout << "LCM of " << a << ", " << b << " and " << c << " is: " << l << endl;
}
void f4()
{
    int a, b, c;

    cout << "\n*************************************************************************\n";
    cout << " Q3. Define a C++ function to calculate LCM of three numbers.\n";
    cout << "*************************************************************************\n\n";

    cout << "Enter Value of a: ";
    cin >> a;
    cout << "Enter Value of b: ";
    cin >> b;
    cout << "Enter Value of c: ";
    cin >> c;

    printLcm(a, b, c);

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 4                                 \n";
    cout << "*************************************************************************\n\n";
}
// Simple isPrime function without sqrt
int isPrime(int n)
{
    for (int i = 2; i < n; i++)  
    {
        if (n % i == 0)
            return 0;  
    }
    return 1;  
}
void findAllPrimeFactors(int n)
{
    int i;
    cout << "Prime factors of " << n << " are: ";

    while (n != 1)
    {
        for (i = 2; i <= n; i++)
        {
            if (n % i == 0 && isPrime(i))
            {
                cout << i << " ";  
                while (n % i == 0) 
                    n = n / i;
                break;  
            }
        }
    }
    cout << endl;
}
void f5()
{
    cout << "\n*************************************************************************\n";
    cout << " Q3. Define a C++ function to print all the prime factors of a given number.\n";
    cout << "     [for example: num = 36, prime factors are 2, 3].\n";
    cout << "*************************************************************************\n\n";

    int n;
    cout << "Enter a number for finding all prime factors: ";
    cin >> n;

    findAllPrimeFactors(n);

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 5                                 \n";
    cout << "*************************************************************************\n\n";
}
// Main function
int main()
{
    // f1();
    // f2();
    // f3();
    // f4();
    f5();
    return 0;
}
