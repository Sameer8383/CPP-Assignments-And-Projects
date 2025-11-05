#include <iostream>
using namespace std;

// Assignment 01: Basic C++ Program Structure
// Q1. Write a simple C++ program that prints "Hello MySirG" to the console.

void printHello() {

    cout <<endl <<"*************************************************************************" << endl;
    cout <<endl <<" Q1. Write a simple C++ program that prints \"Hello MySirG\" to the console." << endl;
    cout <<endl <<"*************************************************************************"<<endl <<endl;

    cout << "==>\t\"Hello MySirG\"" << endl;


    cout<<"\n*************************************************************************"<<endl;
    cout << "                       End of Program 1srt.                              " << endl;
    cout<<"*************************************************************************\n"<<endl;

    int x = 1;
    do{
        cout <<endl;
        x++;
    }
    while(x <= 3);
}
void printhello()
{
    cout <<endl <<"*************************************************************************" << endl;
    cout <<endl <<" Q1. Write a simple C++ program that prints \"Hello\" on the first line." << endl;
    cout <<endl <<"     and \"MySirG\" on the second line to the console." << endl;
    cout <<endl <<"*************************************************************************"<<endl <<endl;

    cout << "==>\t\"Hello\"\n\t\"MySirG\"" << endl;

    cout<<"\n*************************************************************************"<<endl;
    cout << "                       End of Program 2nd.                          " << endl;
    cout<<"*************************************************************************\n"<<endl;
}
int returnSum(int a, int b)
{
    return a + b;
}
void printSum()
{
    cout <<endl <<"*************************************************************************" << endl;
    cout <<endl <<" Q3. Write a C++ program to add two numbers using a function." << endl;
    cout <<endl <<"*************************************************************************"<<endl <<endl;

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sum = returnSum(num1, num2);
    cout << "==> Sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    cout<<"\n*************************************************************************"<<endl;
    cout << "                       End of Program 3rd.                               " << endl;
    cout<<"*************************************************************************\n"<<endl;
}
double circleArea(double radius)
{
    return 3.14 * radius * radius;
}

void printCircleArea()
{
    cout << endl << "*************************************************************************" << endl;
    cout << " Q4. Write a C++ program to calculate the area of a circle using a function." << endl;
    cout << "*************************************************************************" << endl << endl;

    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = circleArea(radius);
    cout << "==> Area of the circle with radius " << radius << " is: " << area << " cm^2" << endl;

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 4th.                               " << endl;
    cout << "*************************************************************************\n" << endl;
}

double volumeOfCuboid(double length, double width, double height)
{
    return length * width * height;
}

void printVolumeOfCuboid()
{
    cout << endl << "*************************************************************************" << endl;
    cout << " Q5. Write a C++ program to calculate the volume of a cuboid using a function." << endl;
    cout << "*************************************************************************" << endl << endl;

    double length, width, height;
    cout << "Enter length, width and height of the cuboid: ";
    cin >> length >> width >> height;

    double volume = volumeOfCuboid(length, width, height);
    cout << "==> Volume of the cuboid is: " << volume << " cm^3" << endl;

    cout << "\n*************************************************************************" << endl;
    cout << "                       End of Program 5th.                               " << endl;
    cout << "*************************************************************************\n" << endl;
}

int main()
{
    printVolumeOfCuboid();
    return 0;
}
