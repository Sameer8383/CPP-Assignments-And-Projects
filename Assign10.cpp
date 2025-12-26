#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

// ------------------- Numbers Class -------------------
class Numbers
{
private:
    int size;
    int *arr;

public:
    Numbers(int size);
    Numbers(const Numbers &n);
    ~Numbers();

    void input();
    void display();
};

// Constructor
Numbers::Numbers(int size)
{
    this->size = size;
    arr = new int[size];
}

// Copy Constructor (Deep Copy)
Numbers::Numbers(const Numbers &n)
{
    size = n.size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = *(n.arr + i);
    }
}

// Destructor
Numbers::~Numbers()
{
    delete[] arr;
}

// Input function
void Numbers::input()
{
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> *(arr + i);
    }
}

// Display function
void Numbers::display()
{
    cout << "Array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
// ------------------- Program Functions -------------------
void f1()
{
    cout << "\n*************************************************************************\n";
    cout << "Q1. Define a class Numbers with size and arr pointer as instance variables.\n";
    cout << "    Provide constructor to initialise instance members, dynamically allocate\n";
    cout << "    an array of given size and store address in arr variable of object. Also\n";
    cout << "    define destructor to deallocate memory of array. Implement deep copy using\n";
    cout << "    copy constructor to avoid memory issues.\n";
    cout << "\n*************************************************************************\n\n";

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    Numbers n1(n);
    n1.input();

    cout << "\nOriginal Object Data:\n";
    n1.display();

    Numbers n2 = n1; // Deep Copy
    cout << "\nCopied Object Data (Deep Copy):\n";
    n2.display();

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 5                                 \n";
    cout << "*************************************************************************\n\n";
}

// ------------------- Student Class -------------------
class Student
{
private:
    int roll;
    string name;
    float marks;

public:
    Student();
    Student(int, string, float);
    Student passStudentData();
    void storeData();
    void displayStudentData(const Student &s); // Pass by reference
};

// Default Constructor
Student::Student()
{
    roll = 0;
    name = "";
    marks = 0.0;
}

// Parameterized Constructor
Student::Student(int roll, string name, float marks)
{
    this->roll = roll;
    this->name = name;
    this->marks = marks;
}

// Function to take input and return object
Student Student::passStudentData()
{
    int roll;
    string name;
    float marks;

    cout << "\nEnter Student Roll No : ";
    cin >> roll;

    cout << "Enter Student Name    : ";
    cin.ignore(1000, '\n');
    getline(cin, name);

    cout << "Enter Student Marks   : ";
    cin >> marks;

    Student s(roll, name, marks);
    return s;
}

// Store data and display
void Student::storeData()
{
    Student s1;

    cout << "\n************* DEFAULT STUDENT DATA *************\n";
    displayStudentData(s1);

    s1 = passStudentData();

    cout << "\n**************** STUDENT DETAILS ****************\n";
    displayStudentData(s1);
    cout << "*************************************************\n\n";
}

// Display function
void Student::displayStudentData(const Student &s)
{
    cout << "Roll No : " << s.roll << endl;
    cout << "Name    : " << s.name << endl;
    cout << "Marks   : " << s.marks << endl;
}
void f2()
{
    cout << "\n*************************************************************************\n";
    cout << "Q2. Define a class Student and write a program to enter student details using\n";
    cout << "    constructor and define member function to display all the details.\n";
    cout << "\n*************************************************************************\n\n";

    Student s;
    s.storeData();

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 2                                 \n";
    cout << "*************************************************************************\n\n";
}
/// @brief
/// @return
// ------------------- Time Class -------------------
class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time();
    Time(int hour, int minute, int second);
    Time passTimeData();
    void storeData();
    Time normalize(Time t);
    void displayTime(Time t1);
};
class Date
{
private:
    int day;
    int month;
    int year;

public:
    // Constructor with initializers
    Date(int day = 1, int month = 1, int year = 0) : day(day), month(month), year(year) {}

    void printData()
    {
        if (day < 1 || day > 31)
            day = 1;
        if (month < 1 || month > 12)
            month = 1;
        if (year < 0)
            year = 0;

        cout << "\nDate is: ";
        if (day < 10)
            cout << "0";
        cout << day << " - ";
        if (month < 10)
            cout << "0";
        cout << month << " - ";
        cout << year << endl;
    }
};

void f3()
{
    cout << "\n*************************************************************************\n";
    cout << "Q3. Define a class Date with day, month, year as instance variables.\n";
    cout << "    Initialise member using constructor initializers.\n";
    cout << "*************************************************************************\n\n";

    int day, month, year;
    cout << "Enter day   : ";
    cin >> day;
    cout << "Enter month : ";
    cin >> month;
    cout << "Enter year  : ";
    cin >> year;

    Date dt = {day, month, year};
    dt.printData();

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 3                                 \n";
    cout << "*************************************************************************\n\n";
}

class Room
{
private:
    int room_no;
    string room_type;
    bool is_Ac;
    float price;

public:
    Room();
    Room(int, string, bool, float);
    void passRoomData();
    void showData();
};

Room::Room()
{
    room_no = 0;
    room_type = "";
    is_Ac = false;
    price = 0.0;
}

Room::Room(int room_no, string room_type, bool is_Ac, float price)
{
    this->room_no = room_no;
    this->room_type = room_type;
    this->is_Ac = is_Ac;
    this->price = price;
}

void Room::passRoomData()
{
    cout << "Enter room no: ";
    cin >> room_no;
    cin.ignore();

    cout << "Enter room type: ";
    getline(cin, room_type);

    cout << "Which Room You Want AC or non-AC (Yes/No): ";

    string str;
    cin >> str;

    if (str == "Yes" || str == "yes" || str == "YES")
    {
        cout << "You selected AC room.\n";
        is_Ac = true;
    }
    else if (str == "No" || str == "no" || str == "NO")
    {
        cout << "You selected Non-AC room.\n";
        is_Ac = false;
    }

    cout << "Enter price: ";
    cin >> price;
}

void Room::showData()
{
    cout << "\n--- Room Details ---\n";
    cout << "Room No: " << room_no << endl;
    cout << "Room Type: " << room_type << endl;
    cout << "AC Available: " << (is_Ac ? "Yes" : "No") << endl;
    cout << "Price: " << price << endl;
}

void f4()
{
    cout << "\n*************************************************************************\n";
    cout << "Q3. Define a class Room for a hotel management project with room number, -\n";
    cout << "    -room type, is_AC, price as instance variables. initialise instance-\n";
    cout << "    variables using constructor.\n";
    cout << "*************************************************************************\n\n";

    Room r;
    r.passRoomData();
    r.showData();
}

class Circle
{
private:
    float radius;

public:
    Circle();
    Circle(float);
    double returnData(Circle &c);  
    void storeData();
};

Circle::Circle() : radius(1)
{
}

Circle::Circle(float r) : radius(r)
{
}

double Circle::returnData(Circle &c1)
{
    cout << "Enter radius of the circle: ";
    cin >> c1.radius;

    return 3.14 * c1.radius * c1.radius;  
}

void Circle::storeData()
{
    Circle c, c1;

    double area = c.returnData(c1);  
 
    cout << "Area of the circle with radius " << c1.radius << " cm is: " << area << " cm^2" << endl << endl;
}

void f5()
{
    cout << "\n*************************************************************************\n";
    cout << "Q3. Define Circle class with radius as instance variable. Define two constr-\n";
    cout << "    -uctors in the class no-parameterised and parameterised.\n";
    cout << "*************************************************************************\n\n";

    Circle c;

    c.storeData();
}

int main()
{
    f5();
    return 0;
}
