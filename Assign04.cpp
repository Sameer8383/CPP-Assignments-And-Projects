#include <iostream>
#include <cmath>
using namespace std;
// Functions Definition
void swap(int &, int &);
int add(int, int, int = 0);
float area(float);
int area(int, int);
float area(float, float, float);
int max(int, int);
double max(double, double);
// Q1. Swap Two Numbers (Call by Reference)
void swap(int &a, int &b)
{
     b = (a + b) - (a = b);
}
void printSwapValues()
{
     cout << endl
          << "*************************************************************************" << endl;
     cout << endl
          << " Q1. Define a C++ program to swap two numbers using call by reference." << endl;
     cout << endl
          << "*************************************************************************" << endl
          << endl;

     int a, b;
     cout << "Enter Value for a: ";
     cin >> a;
     cout << "Enter Value for b: ";
     cin >> b;

     cout << "Before swapping : a = " << a << ", b = " << b << endl;
     swap(a, b);
     cout << "After swapping  : a = " << a << ", b = " << b << endl;

     cout << "\n*************************************************************************" << endl;
     cout << "                       End of Program 1st.                               " << endl;
     cout << "*************************************************************************\n"
          << endl;
}
// Q2. Sum of two or three numbers using default arguments.
int add(int a, int b, int c)
{
     return a + b + c;
}
void printAdditionOf2or3Numbers()
{
     cout << endl
          << "*************************************************************************" << endl;
     cout << endl
          << " Q2. Write a C++ function using the default argument that is able to add two or ";
     cout << "  three numbers." << endl;
     cout << endl
          << "*************************************************************************" << endl
          << endl;

     int a, b, c;
     char choice;

     cout << "Enter your choice (2 for two numbers, 3 for three numbers): ";
     cin >> choice;

     if (choice == '2')
     {
          // For two numbers
          cout << "Enter two numbers: ";
          cin >> a >> b;
          int sum = add(a, b);
          cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
     }
     else if (choice == '3')
     {
          // For three numbers
          cout << "Enter three numbers: ";
          cin >> a >> b >> c;
          int s = add(a, b, c);
          cout << "The sum of " << a << ", " << b << " and " << c << " is: " << s << endl;
     }
     else
     {
          cout << "Invalid choice! Please enter only 2 or 3." << endl;
     }
     cout << "\n*************************************************************************" << endl;
     cout << "                       End of Program 2nd.                               " << endl;
     cout << "*************************************************************************\n"
          << endl;
}
// Q3. Find area of Circle, Rectangle and Triangle using function overloading.
// ------------------ Function Overloading -------------------
float area(float r)
{
     return 3.14 * r * r; // Circle
}

int area(int a, int b)
{
     return a * b; // Rectangle
}

float area(float a, float b, float c)
{
     float s = (a + b + c) / 2.0;
     return sqrt(s * (s - a) * (s - b) * (s - c)); // Triangle
}

// ------------------ Print Function -------------------
void printAreaCalculations()
{
     cout << "\n*************************************************************************\n";
     cout << " Q3. Calculate area of circle, rectangle & triangle using overloading.\n";
     cout << "*************************************************************************\n\n";

     float x, y, z;

     // Circle
     cout << "Enter radius of the circle: ";
     cin >> x;
     cout << "Area of Circle: " << area(x) << " cm^2" << endl;

     // Rectangle
     cout << "Enter length and breadth of the rectangle: ";
     cin >> x >> y;
     cout << "Area of Rectangle: " << area((int)x, (int)y) << " cm^2" << endl;

     // Triangle
     cout << "Enter three sides of the triangle: ";
     cin >> x >> y >> z;
     cout << "Area of Triangle: " << area(x, y, z) << " cm^2" << endl;

     cout << "\n*************************************************************************\n";
     cout << "                       End of Program 3rd.                               \n";
     cout << "*************************************************************************\n";
}
// Q4. Find maximum of two [both of the numbers is integer and real] numbers using Function Overloading
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
     cout << "\n**************************************************************************************\n";
     cout << " Q4. Find the Maximum of Two Numbers using Function Overloading\n";
     cout << "      (Both numbers can be Integer or Real)\n";
     cout << "**************************************************************************************\n\n";

     int a, b;
     double x, y;

     // Integer Input
     cout << "Enter two integers: ";
     cin >> a >> b;
     int maxInt = max(a, b);
     cout << "The maximum of " << a << " and " << b << " is: " << maxInt << endl;

     // Floating-point Input
     cout << "\nEnter two real numbers: ";
     cin >> x >> y;
     double maxFloat = max(x, y);
     cout << "The maximum of " << x << " and " << y << " is: " << maxFloat << endl;

     cout << "\n*************************************************************************\n";
     cout << "                         End of Program 4                                 \n";
     cout << "*************************************************************************\n\n";
}
// Q5. Function Overloading to Add Different Data Types
int sum(int a, int b)
{
     return a + b;
}
float sum(float a, float b)
{
     return a + b;
}
double sum(int a, double b)
{
     return a + b;
}
double sum(double a, int b)
{
     return a + b;
}

void printSumFunction()
{
     cout << endl
          << "*************************************************************************" << endl;
     cout << endl
          << " Q5. Write functions using function overloading to add two numbers having." << endl;
     cout << "     different data types." << endl;
     cout << "*************************************************************************" << endl
          << endl;

     int a, b;
     float x, y;
     double p;

     cout << "Enter two integers: ";
     cin >> a >> b;
     cout << "Sum (int + int): " << sum(a, b) << endl
          << endl;

     cout << "Enter two floating-point numbers: ";1 2
     cin >> x >> y;
     cout << "Sum (float + float): " << sum(x, y) << endl
          << endl;

     cout << "Enter one integer and one double: ";
     cin >> a >> p;
     cout << "Sum (int + double): " << sum(a, p) << endl
          << endl;

     cout << "Enter one double and one integer: ";
     cin >> p >> a;
     cout << "Sum (double + int): " << sum(p, a) << endl;

     cout << "\n*************************************************************************" << endl;
     cout << "                       End of Program 5th.                               " << endl;
     cout << "*************************************************************************\n"
          << endl;
}
int main()
{
     // printSwapValues();
     // printAdditionOf2or3Numbers();
     // printAreaCalculations();
     // printMaxOf2Numbers();
     printSumFunction();
     printf("\n");
     return 0;
}