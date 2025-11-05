#include <iostream>
using namespace std;

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0f;
}
void printAverage()
{
    cout << endl
         << "*************************************************************************" << endl;
    cout << endl
         << " Q1. Write a C++ program to calculate the average of three numbers." << endl;
    cout << endl
         << "*************************************************************************" << endl
         << endl;

    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    float avg = average(num1, num2, num3);
    cout << "==> Average of " << num1 << " + " << num2 << " + " << num3 << " = " << avg << endl;

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 1st.                               " << endl;
    cout << "*************************************************************************\n"
         << endl;
}
int square(int n)
{
    return n * n;
}
void printSquare()
{
    cout << endl
         << "*************************************************************************" << endl;
    cout << endl
         << " Q2. Write a C++ program to find the square of a number." << endl;
    cout << endl
         << "*************************************************************************" << endl
         << endl;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sq = square(num);
    cout << "==> Square of " << num << " * " << num << " = " << sq << endl;

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 2nd.                               " << endl;
    cout << "*************************************************************************\n"
         << endl;
}
void swap(int a, int b)
{
    a = (a + b) - (b = a);
    cout << "==> After Swapping: num1 = " << a << ", num2 = " << b << endl;
}
void printSwap()
{
    cout << endl << "*************************************************************************" << endl;
    cout << endl << " Q3. Write a C++ program to swap two numbers without using a third variable." << endl;
    cout << endl << "*************************************************************************" << endl << endl;

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "==> Before Swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(num1, num2);

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 3rd.                               " << endl;
    cout << "*************************************************************************\n"
         << endl;
}
int findMaximum(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
void printMaximum()
{
    cout << endl
         << "*************************************************************************" << endl;
    cout << endl
         << " Q4. Write a C++ program to find the maximum of three numbers." << endl;
    cout << endl
         << "*************************************************************************" << endl
         << endl;

    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int maxNum = findMaximum(num1, num2, num3);
    cout << "==> Maximum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << maxNum << endl;

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 4th.                               " << endl;
    cout << "*************************************************************************\n"
         << endl;
}
int sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}
void printSumOfArray()
{
    cout << endl << "*************************************************************************" << endl;
    cout << endl << " Q5. Write a C++ program to calculate the sum of elements in an array of size 10." << endl;
    cout << endl << "*************************************************************************" << endl << endl;

    int arr[10];

    cout << "Enter " << 10 << " elements:" << endl;
    for (int i = 0; i < 10; ++i)
        cin >> arr[i];

    int sum = sumOfArray(arr, 10);
    cout << "==> Sum of array elements is: " << sum << endl;

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 5th.                               " << endl;
    cout << "*************************************************************************\n" << endl;
}
int main()
{
    printSumOfArray();
    cout << endl;
    return 0;
}