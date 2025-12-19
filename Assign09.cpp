#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Cuboid class
class Cuboid
{
private:
    float length;
    float width;
    float height;

    // Private constructor
    Cuboid(float length, float width, float height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

public:
    Cuboid() { length = width = height = 0; }
    static Cuboid passValue();             // static member function
    static void displayCuboidData(Cuboid); // static member function
};

// Static function definitions
Cuboid Cuboid::passValue()
{
    int length, width, height;
    cout << "\nEnter length width and height of the Cuboid respectively: ";
    cin >> length >> width >> height;

    Cuboid Q(length, width, height);
    return Q;
}
// Static function definitions
void Cuboid::displayCuboidData(Cuboid Q)
{
    float volume = Q.length * Q.width * Q.height;
    cout << "\nLength: " << Q.length
         << "cm, Width: " << Q.width
         << "cm, Height: " << Q.height
         << "cm  (Volume) = " << volume << "cm^3"
         << endl
         << endl;
}

void f1()
{
    cout << "\n*************************************************************************\n";
    cout << "Q1. Define a class Cuboid with length, breadth and height as instance member\n";
    cout << "    variables. Define consturctor to initialise member variables.\n";
    cout << "\n*************************************************************************\n\n";

    cout << "Creating Cuboid using default constructor:\n";
    Cuboid defaultCuboid; // calls public default constructor
    Cuboid::displayCuboidData(defaultCuboid);

    cout << "Creating Cuboid using static function (parameterized constructor):\n";
    Cuboid obj = Cuboid::passValue();
    Cuboid::displayCuboidData(obj);
    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 1                                 \n";
    cout << "*************************************************************************\n\n";
}
/// @brief
/// @return
class Customer
{
private:
    int cust_id;
    string name, email;
    string mobile;

public:
    Customer();
    Customer(int cust_id, string name, string email, string mobile);
    Customer passCustomerData();
    void displayCustomerData(Customer c1);
    void storeData();
};

Customer::Customer()
{
    cust_id = 0;
    name = "";
    email = "";
    mobile = "";
}

Customer::Customer(int cust_id, string name, string email, string mobile)
{
    this->cust_id = cust_id;
    this->name = name;  
    this->email = email;
    this->mobile = mobile;
}

Customer Customer::passCustomerData()
{
    int cust_id;
    string name, email, mobile;

    cout << "\n===================== CUSTOMER DATA ENTRY =====================\n";
    cout << "Please enter the following details for the new customer:\n\n";

    cout << "1. Customer ID       : ";
    cin >> cust_id;

    cout << "2. Customer Name     : ";
    cin.ignore(1000, '\n');
    getline(cin, name);

    cout << "3. Customer Email    : ";
    getline(cin, email);

    cout << "4. Customer Mobile # : ";
    getline(cin, mobile);

    cout << "\n===============================================================\n";

    Customer c(cust_id, name, email, mobile);
    return c;
}

void Customer::storeData()
{
    Customer c1;

    cout << "\n************* DEFAULT CUSTOMER DATA *************\n";
    displayCustomerData(c1);

    c1 = passCustomerData();

    cout << "\n******************** CUSTOMER DETAILS ***********************\n";
    displayCustomerData(c1);
    cout << "**************************************************************\n\n";
}

void Customer::displayCustomerData(Customer c1)
{
    cout << "Customer ID       : " << c1.cust_id << endl;
    cout << "Customer Name     : " << c1.name << endl;
    cout << "Customer Email    : " << c1.email << endl;
    cout << "Customer Mobile # : " << c1.mobile << endl;
}

void f2()
{
    cout << "\n*************************************************************************\n";
    cout << "Q2. Define a class Customer with instance members cust_id, name, email, mobile.\n";
    cout << "    Define non parameterised and parameterised constructor in the class.\n";
    cout << "\n*************************************************************************\n\n";

    Customer c;
    c.storeData();

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 2                                 \n";
    cout << "*************************************************************************\n\n";
}
/// @brief
/// @return
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

// Default constructor
Time::Time()
{
    hour = 0;
    minute = 0;
    second = 0;
}

// Parameterized constructor
Time::Time(int hour, int minute, int second)
{
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

// Function to take input and return object
Time Time::passTimeData()
{
    int hour, minute, second;

    cout << "\n===================== TIME DATA ENTRY =====================\n";
    cout << "Please enter the following time details:\n\n";

    cout << "Enter Hour, Minute and Second: ";
    cin >> hour >> minute >> second;

    cout << "\n===========================================================\n";

    Time t(hour, minute, second);
    return t;
}

// Store and display data
void Time::storeData()
{
    Time t1;

    cout << "\n************* DEFAULT TIME DATA *************\n";
    displayTime(t1);

    t1 = passTimeData();

    cout << "\n******************** TIME DETAILS ********************\n";
    Time t2 = normalize(t1);
    displayTime(t2);
    cout << "********************************************************\n\n";
}
Time Time::normalize(Time t)
{
    for (int i = 1; i <= t.second; i++)
        if (i % 60 == 0)
            t.minute++;

    t.second = t.second % 60;

    for (int i = 1; i <= t.minute; i++)
        if (i % 60 == 0)
            t.hour++;

    t.minute = t.minute % 60;

    for (int i = 1; i <= t.hour; i++)
        if (i % 24 == 0)
            t.hour = 0;

    return t;
}
// Display function
void Time::displayTime(Time t1)
{
    if (t1.hour < 0 || t1.hour > 23)
        t1.hour = 0;
    if (t1.hour < 10)
        cout << "0";
    cout << t1.hour << " : ";

    if (t1.minute < 0 || t1.minute > 59)
        t1.minute = 0;
    if (t1.minute < 10)
        cout << "0";
    cout << t1.minute << " : ";

    if (t1.second < 0 || t1.second > 59)
        t1.second = 0;
    if (t1.second < 10)
        cout << "0";
    cout << t1.second << endl;
}
void f3()
{
    cout << "\n*************************************************************************\n";
    cout << "Q2. Define a class Time with hour, minute, second as instance member variables.\n";
    cout << "    Define non parameterised and parameterised constructor in the class.\n";
    cout << "\n*************************************************************************\n\n";

    Time t;
    t.storeData();

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 3                                 \n";
    cout << "*************************************************************************\n\n";
}
/// @brief  
/// @return
class Book
{
private:
    int bookId;
    string title;
    float price;

public:
    Book();                                      // default constructor
    Book(int bookId, string title, float price); // parameterized constructor
    Book passBookData();                         // function to input data and return object
    void displayBookData(Book b1);               // display book info
    void storeData();                            // store and display book data
};

// Default constructor
Book::Book()
{
    bookId = 0;
    title = "";
    price = 0.0;
}

// Parameterized constructor
Book::Book(int bookId, string title, float price)
{
    this->bookId = bookId;
    this->title = title;
    this->price = price;
}

// Function to input book data
Book Book::passBookData()
{
    int bookId;
    string title;
    float price;

    cout << "\n===================== BOOK DATA ENTRY =====================\n";
    cout << "Please enter the following details for the book:\n\n";

    cout << "1. Book ID    : ";
    cin >> bookId;
    cin.ignore(1000, '\n'); // flush newline

    cout << "2. Book Title : ";
    getline(cin, title);

    cout << "3. Book Price : ";
    cin >> price;

    cout << "\n===========================================================\n";

    Book b(bookId, title, price);
    return b;
}

// Display book data
void Book::displayBookData(Book b1)
{
    cout << "Book ID    : " << b1.bookId << endl;
    cout << "Book Title : " << b1.title << endl;
    cout << "Book Price : $" << b1.price << endl;
}

// Store and display data
void Book::storeData()
{
    Book b1;
    cout << "\n************* DEFAULT BOOK DATA *************\n";
    displayBookData(b1);

    b1 = passBookData();

    cout << "\n******************** BOOK DETAILS ***********************\n";
    displayBookData(b1);
    cout << "*********************************************************\n\n";
}

// Function to demonstrate Book class
void f4()
{
    cout << "\n*************************************************************************\n";
    cout << "Q4. Define a class Book with bookId, title, and price as instance member variables.\n";
    cout << "    Define non parameterised and parameterised constructor in the class.\n";
    cout << "\n*************************************************************************\n\n";

    Book b;
    b.storeData();

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 4                                 \n";
    cout << "*************************************************************************\n\n";
}
/// @brief
/// @return
class Complex
{
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0); // parameterized constructor with default values
    void showData();                   // method to display complex number
};

Complex::Complex(float real, float imag)
{
    this->real = real;
    this->imag = imag;
}

void Complex::showData()
{
    cout << real << " + " << imag << "i" << endl;
}

void f5()
{
    cout << "\n*************************************************************************\n";
    cout << "Q5. Define a class Complex with instance variables for real and imaginary part\n";
    cout << "    of a complex number.  Define only one parameterised constructor in the class\n";
    cout << "    to initialize complex object. Also define showData method in the class to \n";
    cout << "    display object data. Now create an array of Complex class with size n\n";
    cout << "    and display value of each object.\n";
    cout << "\n*************************************************************************\n\n";

    int n;
    cout << "Enter number of complex numbers: ";
    cin >> n;

    Complex arr[n]; // array of Complex objects

    for (int i = 0; i < n; i++)
    {
        float real, imag;
        cout << "\nEnter real and imaginary part for " << i + 1 <<"complex: ";
        cin >> real >> imag;
        arr[i] = Complex(real, imag); // initialize each object
    }

    cout << "\n******************** COMPLEX NUMBERS ***********************\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Complex number is: ";
        arr[i].showData();
    }
    cout << "************************************************************\n\n";

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 5                                 \n";
    cout << "*************************************************************************\n\n";

}
int main()
{
    f5();
    return 0;
}
