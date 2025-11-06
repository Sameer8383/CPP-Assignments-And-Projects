#include <iostream>
#include <cmath>
using namespace std;

// Function Declarations
void swap(int &, int &);
int add(int, int, int = 0);
float areaOfCircle(float);
int areaOfRectangle(int, int);
float areaOfTriangle(int, int, int);
int max(int, int);
double max(double, double);
int Add(int, int);
float Add(float, float);
double Add(int, double);
double Add(double, int);

//-----------------------------------------------------------------
// Q1. Swap Two Numbers (Call by Reference)
void swap(int &a, int &b)
{
    a = (a + b) - (b = a);
}
void printSwap()
{
    cout << endl << "*************************************************************************" << endl;
    cout << endl << " Q1. Define a C++ program to swap two numbers using call by reference." << endl;
    cout << endl << "*************************************************************************" << endl << endl;

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: num1 = " << a << ", num2 = " << b << endl;
    swap(a, b);
    cout << "After swapping: num1 = " << a << ", num2 = " << b << endl;

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 1st.                               " << endl;
    cout << "*************************************************************************\n" << endl;
}

//-----------------------------------------------------------------
// Q2. Sum of Two or Three Numbers using Default Argument
int add(int a, int b, int c)
{
    return a + b + c;
}
void printSumOf2or3Numbers()
{
    cout << endl << "*************************************************************************" << endl;
    cout << endl << " Q2. Write a C++ program to calculate the sum of two or three numbers";
    cout << " using function overloading." << endl;
    cout << endl << "*************************************************************************" << endl << endl;

    int a, b, c;
    char choice;

    cout << "Do you want to add two or three numbers? (Enter 2 or 3): ";
    cin >> choice;

    if (choice == '2')
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
        int sum = add(a, b);
        cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
    }
    else if (choice == '3')
    {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
        int s = add(a, b, c);
        cout << "Sum of " << a << ", " << b << ", and " << c << " is: " << s << endl;
    }
    else
    {
        cout << "Invalid choice! Please enter 2 or 3." << endl;
    }

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 2nd.                               " << endl;
    cout << "*************************************************************************\n" << endl;
}

//-----------------------------------------------------------------
// Q3. Area Calculation using Function Overloading
float areaOfCircle(float r)
{
    return 3.14 * r * r;
}
int areaOfRectangle(int a, int b)
{
    return a * b;
}
float areaOfTriangle(int a, int b, int c)
{
    float s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
void printAreaCalculations()
{
    cout << endl << "*************************************************************************" << endl;
    cout << endl << " Q3. Write a C++ program to calculate the area of a circle, rectangle, and triangle using function overloading." << endl;
    cout << endl << "*************************************************************************" << endl << endl;

    float a, b, c;

    cout << "Enter radius of the circle: ";
    cin >> a;
    float circleArea = areaOfCircle(a);
    cout << "Area of Circle: " << circleArea << " cm^2" << endl;

    cout << "Enter length and breadth of the rectangle: ";
    cin >> a >> b;
    int rectangleArea = areaOfRectangle(a, b);
    cout << "Area of Rectangle: " << rectangleArea << " cm^2" << endl;

    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;
    float triangleArea = areaOfTriangle(a, b, c);
    cout << "Area of Triangle: " << triangleArea << " cm^2" << endl;

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 3rd.                               " << endl;
    cout << "*************************************************************************\n" << endl;
}

//-----------------------------------------------------------------
// Q4. Maximum of Two Numbers (Function Overloading)
int max(int a, int b)
{
    return (a > b) ? a : b;
}
double max(double a, double b)
{
    return (a > b) ? a : b;
}
void printMaxOf2Numbers()
{
    cout << endl << "**************************************************************************************" << endl;
    cout << endl << " Q4. Write a C++ program to find the maximum of two numbers using function overloading." << endl;
    cout << endl << "**************************************************************************************" << endl << endl;

    int a, b;
    double x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;
    int maxInt = max(a, b);
    cout << "Maximum of " << a << " and " << b << " is: " << maxInt << endl;

    cout << "\nEnter two floating-point numbers: ";
    cin >> x >> y;
    float maxFloat = max(x, y);
    cout << "Maximum of " << x << " and " << y << " is: " << maxFloat << endl;

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 4th.                               " << endl;
    cout << "*************************************************************************\n" << endl;
}

//-----------------------------------------------------------------
// Q5. Function Overloading to Add Different Data Types
int Add(int a, int b)
{
    return a + b;
}
float Add(float a, float b)
{
    return a + b;
}
double Add(int a, double b)
{
    return a + b;
}
double Add(double a, int b)
{
    return a + b;
}
void printAddFunction()
{
    cout << endl << "*************************************************************************" << endl;
    cout << endl << " Q5. Write function using function overloading to add two numbers having";
    cout << endl << "     different data types";
    cout << endl << "*************************************************************************" << endl << endl;

    int a, b;
    float x, y;
    double p, q;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum (int + int): " << Add(a, b) << endl << endl;

    cout << "Enter two floating-point numbers: ";
    cin >> x >> y;
    cout << "Sum (float + float): " << Add(x, y) << endl << endl;

    cout << "Enter one integer and one double: ";
    cin >> a >> p;
    cout << "Sum (int + double): " << Add(a, p) << endl;

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 5th.                               " << endl;
    cout << "*************************************************************************\n" << endl;
}

//-----------------------------------------------------------------
int main()
{
    // printSwap();
    // printSumOf2or3Numbers();
    // printAreaCalculations();
    // printMaxOf2Numbers();
     printAddFunction();
    return 0;
}