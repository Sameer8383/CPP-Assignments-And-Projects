#include <iostream>
using namespace std;

// Q1. Print all prime numbers between two given numbers
void printAllPrime(int num, int n)
{
    int i, j, prime;

    cout << "Prime numbers between " << num << " and " << n << " are: ";

    for (i = num + 1; i <= n; i++)
    {
        prime = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                prime++;
        }
        if (prime == 2)
            cout << i << " ";
    }

    cout << endl;
}

void primeBetweenRange()
{
    cout << endl
         << "*************************************************************************" << endl;
    cout << endl
         << " Q1. Write a C++ program to print all prime numbers between two given numbers." << endl;
    cout << endl
         << "*************************************************************************" << endl
         << endl;

    int num1, num2;
    cout << "Enter two numbers (intervals): ";
    cin >> num1 >> num2;

    printAllPrime(num1, num2);

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 1st.                               " << endl;
    cout << "*************************************************************************\n"
         << endl;
}

// Q2. Find highest value digit in a number
int highestValueDigit(int n)
{
    int maxDigit = n % 10;
    n /= 10;

    while (n > 0)
    {
        if (maxDigit < n % 10)
            maxDigit = n % 10;
        n /= 10;
    }
    return maxDigit;
}

void printHighestValueDigit()
{
    cout << endl
         << "*************************************************************************" << endl;
    cout << endl
         << " Q2. Write a C++ function to find the highest value digit in a given number." << endl;
    cout << endl
         << "*************************************************************************" << endl
         << endl;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int highest = highestValueDigit(num);
    cout << "==> The highest value digit in " << num << " is: " << highest << endl;

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 2nd.                               " << endl;
    cout << "*************************************************************************\n"
         << endl;
}
int power(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}
float Power(float a, float b)
{
    float result = 1.0;

    if (b == 0)
        return 1;
    else if (b > 0)
    {
        for (int i = 1; i <= b; i++)
            result *= a;
    }
    else
    {
        for (int i = 1; i <= -b; i++)
            result *= a;
        result = 1.0 / result;
    }

    return result;
}
float pow(float a, float b)
{
    if (b == 0)
        return 1;
    else if (b > 0)
        return a * pow(a, b - 1);
    else
        return pow(a, b + 1) * (1 / a);
}
void printPower()
{
    cout << endl
         << "*************************************************************************" << endl;
    cout << endl
         << " Q3. Write a C++ program to calculate the power of a number using function." << endl;
    cout << endl
         << "*************************************************************************" << endl
         << endl;

    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    int result = power(base, exponent);
    int result2 = Power(base, exponent);
    int result3 = pow(base, exponent);
    cout << "==> " << base << " raised to the power of " << exponent << " is: " << result << endl;
    cout << "==> " << base << " raised to the power of " << exponent << " is: " << result2 << endl;
    cout << "==> " << base << " raised to the power of " << exponent << " is: " << result3 << endl;

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 3rd.                               " << endl;
    cout << "*************************************************************************\n"
         << endl;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
void printPascalTriangle()
{
    cout << endl
         << "*************************************************************************" << endl;
    cout << endl
         << " Q4. Write a C++ program to print Pascal's triangle." << endl;
    cout << endl
         << "*************************************************************************" << endl
         << endl;

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Pascal's Triangle:" << endl;
    for (int i = 1; i <= rows; i++)
    {
        int prime = 1;
        int r = 0;
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            if (j >= rows + 1 - i && j <= rows - 1 + i)
            {
                if (prime)
                {
                    cout << combination(i - 1, r++);
                    prime = 0;
                }
                else
                {
                    cout << " ";
                    prime = 1;
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 4th.                               " << endl;
    cout << "*************************************************************************\n"
         << endl;
}
int isFibonacci(int n)
{
    int a = -1, b = 1, c = 0;

    if (n == a || n == b)
        return 1;

    while (c < n)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return (c == n);
}
void printFibonacciCheck()
{
    cout << endl << "*************************************************************************" << endl;
    cout << endl << " Q5. Write a C++ function to check whether a given number is Fibonacci or not." << endl;
    cout << endl << "*************************************************************************\n" << endl;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isFibonacci(num))
        cout << "==> " << num << " is a Fibonacci number." << endl;
    else
        cout << "==> " << num << " is not a Fibonacci number." << endl;

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 5th.                               " << endl;
    cout << "*************************************************************************\n" << endl;
}
int main()
{
    printFibonacciCheck();
    cout << endl;
    return 0;
}
