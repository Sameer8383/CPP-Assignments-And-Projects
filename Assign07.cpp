#include <iostream>
#include <cstring>
using namespace std;

//  Complex class
typedef class
{
private:
    float imag;
    float real;

public:
    void setData();
    void printData();

} complex;

// Complex class Instance method definitions
void complex::setData()
{
    cout << "Enter real and imaginary part of complex number: ";
    cin >> real >> imag;
}

void complex::printData()
{
    if (imag >= 0)
        cout << "Complex Number is: " << real << " + " << imag << "i" << endl;
    else
        cout << "Complex Number is: " << real << " - " << -imag << "i" << endl;
}

void f1()
{
    cout << "\n*************************************************************************\n";
    cout << " Q1. Define a class Complex to represent a complex number and write a program to\n";
    cout << "     set and print values of complex number using class.\n";
    cout << "*************************************************************************\n\n";

    complex c;
    c.setData();
    c.printData();

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 1                                 \n";
    cout << "*************************************************************************\n\n";
}

// Time class
typedef class
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    void setData(int h, int m, int s);
    void printData();

} time;

void time::setData(int h, int m, int s)
{
    hours = h;
    minutes = m;
    seconds = s;
}

void time::printData()
{
    cout << "Time is: ";
    if (hours < 0 || hours > 23)
        hours = 0;
    if (hours < 10)
        cout << "0";
    cout << hours << " : ";

    if (minutes < 0 || minutes > 59)
        minutes = 0;
    if (minutes < 10)
        cout << "0";
    cout << minutes << " : ";

    if (seconds < 0 || seconds > 59)
        seconds = 0;
    if (seconds < 10)
        cout << "0";
    cout << seconds << endl;
}
void f2()
{
    cout << "\n*************************************************************************\n";
    cout << " Q2. Define a class to represent time (hours, minutes, seconds) and write\n";
    cout << "     a program to set and print values of time using class.\n";
    cout << "*************************************************************************\n\n";

    time t;
    int h, m, s;
    cout << "Enter hours, minutes and seconds: ";
    cin >> h >> m >> s;

    t.setData(h, m, s);
    t.printData();

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 2                                 \n";
    cout << "*************************************************************************\n\n";
}

// Date class
typedef class
{
private:
    int day;
    int month;
    char *monthName;
    int year;
    bool isMonthName;

public:
    void setData(int d, int m, int y, bool ismonth);
    void setData(int d, char *mName, int y, bool ismonth);
    void printData();
} date;

void date::setData(int d, int m, int y, bool ismonth)
{
    day = d;
    month = m;
    year = y;
    isMonthName = ismonth;
}

void date::setData(int d, char *mName, int y, bool ismonth)
{
    day = d;
    monthName = mName;
    year = y;
    isMonthName = ismonth;
}

void date::printData()
{
    if (day < 1 || day > 31)
        day = 1;
    if (year < 0)
        year = 0;

    cout << "\nDate is: ";
    if (day < 10)
        cout << "0";
    cout << day << " - ";

    if (isMonthName)
        cout << monthName << " - ";
    else
    {
        if (month < 1 || month > 12)
            month = 1;
        if (month < 10)
            cout << "0";
        cout << month << " - ";
    }

    cout << year << endl;
}
void f3()
{
    cout << "\n*************************************************************************\n";
    cout << " Q3. Define a class to represent a date (day, month, year) and write a\n";
    cout << " program to set and print values of date using class.\n";
    cout << "*************************************************************************\n\n";

    date dt;
    int d, m, y;
    char month[20], choice[20];

    cout << "Do you want to enter the month as a number or a name? (type 'number' or 'name'): ";
    // cin.ignore(1000, '\n');
    cin.getline(choice, 20);

    if (strcmp(choice, "name") == 0 || strcmp(choice, "Name") == 0)
    {
        cout << "Enter day: ";
        cin >> d;
        cin.ignore(1000, '\n');
        cout << "Enter month name: ";
        cin.getline(month, 20);
        cout << "Enter year: ";
        cin >> y;

        dt.setData(d, month, y, true);
        dt.printData();
    }
    else if (strcmp(choice, "number") == 0 || strcmp(choice, "Number") == 0)
    {
        cout << "Enter day: ";
        cin >> d;
        cout << "Enter month number: ";
        cin >> m;
        cout << "Enter year: ";
        cin >> y;

        dt.setData(d, m, y, false);
        dt.printData();
    }
    else
    {
        cout << "Invalid choice! Please enter 'number' or 'name'.\n";
    }

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 3                                 \n";
    cout << "*************************************************************************\n\n";
}

// Circle class
typedef class
{
private:
    float radius;

public:
    void setData(float r);
    int getRadius();
    int getArea();
    int getCircumference();
    void printData();
} circle;

void circle::setData(float r)
{
    radius = r;
}

int circle::getRadius()
{
    return radius;
}

int circle::getArea()
{
    return 3.14 * radius * radius;
}

int circle::getCircumference()
{
    return 2 * 3.14 * radius;
}

void circle::printData()
{
    cout << "Circle Radius: " << getRadius() << " cm" << endl;
    cout << "Circle Area: " << getArea() << " cm^2" << endl;
    cout << "Circle Circumference: " << getCircumference() << " cm" << endl;
}
void f4()
{
    cout << "\n*************************************************************************\n";
    cout << " Q4. Define a class to represent a circle (radius) and write a program\n";
    cout << " to set and print values of circle including area and circumference using class.\n";
    cout << "*************************************************************************\n\n";

    circle c;
    float r;
    cout << "Enter radius of circle: ";
    cin >> r;

    c.setData(r);
    c.printData();

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 4                                 \n";
    cout << "*************************************************************************\n\n";
}
int main()
{
    // f1();
    // f2();
    f3();
    //  f4();
    return 0;
}
