#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Complex class with new name
class Complex
{
private:
    float imag;
    float real;

public:
    void setComplexData(int r, int i);
    void printComplexData();
    Complex addComplex(Complex c);
    Complex subtractComplex(Complex c);
    Complex multiplyComplex(Complex c);
};

void Complex::setComplexData(int real, int imag)
{
    this->real = real;
    this->imag = imag;
}

void Complex::printComplexData()
{
    char ch;

    if (imag >= 0)
        ch = '+';
    else
        ch = '-';
    cout << real << " " << ch << " " << abs(imag) << "i";
}

Complex Complex::addComplex(Complex c1)
{
    Complex sum;
    sum.real = real + c1.real;
    sum.imag = imag + c1.imag;
    return sum;
}

Complex Complex::subtractComplex(Complex c1)
{
    Complex sub;
    sub.real = real - c1.real;
    sub.imag = imag - c1.imag;
    return sub;
}
Complex Complex::multiplyComplex(Complex c)
{
    Complex mul;

    mul.real = (real * c.real) - (imag * c.imag);
    mul.imag = (real * c.imag) + (imag * c.real);

    return mul;
}

void f1()
{
    cout << "\n*************************************************************************\n";
    cout << " Q1. Define a class Complex to represent a complex number with instance variables\n";
    cout << "     a and b to store real and imaginary parts. Also define following member functions.\n\n";
    cout << "      1.  void setComplex(int, int)\n";
    cout << "      2.  void showData()\n";
    cout << "      3.  Complex addComplex(Complex)\n";
    cout << "      4.  Complex subtractComplex(Complex)\n";
    cout << "      5.  Complex multiplyComplex(Complex)\n";
    cout << "*************************************************************************\n\n";

    Complex c, c1, c2;
    int r, i;

    cout << "\nEnter value for r and i: ";
    cin >> r >> i;

    c.setComplexData(r, i);
    cout << "1st Complex is: ";
    c.printComplexData();

    cout << "\n\nEnter value for r and i: ";
    cin >> r >> i;

    c1.setComplexData(r, i);
    cout << "2nd Complex is: ";
    c1.printComplexData();
    cout << endl;

    c2 = c.addComplex(c1);
    cout << "\nSum of complex two complex : ";
    c2.printComplexData();
    cout << endl;

    c2 = c.subtractComplex(c1);
    cout << "\nSubtraction of complex is  : ";
    c2.printComplexData();
    cout << endl;

    c2 = c.multiplyComplex(c1);
    cout << "\nMultiplication of complex is: ";
    c2.printComplexData();
    cout << endl
         << endl;

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 1                                 \n";
    cout << "*************************************************************************\n\n";
}
// Time Class
class Time
{
    int hours;
    int min;
    int sec;

public:
    void setTime(int, int, int);
    void showTime();
    void normalizeTime();
    Time addTime(Time);
    bool is_Greater(Time);
};

void Time::setTime(int h, int m, int s)
{
    hours = h;
    min = m;
    sec = s;
}

void Time::showTime()
{
    if (hours < 0 || hours > 23)
        hours = 0;
    if (hours < 10)
        cout << "0";
    cout << hours << " : ";

    if (min < 0 || min > 59)
        min = 0;
    if (min < 10)
        cout << "0";
    cout << min << " : ";

    if (sec < 0 || sec > 59)
        sec = 0;
    if (sec < 10)
        cout << "0";
    cout << sec << endl;
}

void Time::normalizeTime()
{
    for (int i = 1; i <= sec; i++)
        if (i % 60 == 0)
            min++;

    sec = sec % 60;

    for (int i = 1; i <= min; i++)
        if (i % 60 == 0)
            hours++;

    min = min % 60;

    for (int i = 1; i <= hours; i++)
        if (i % 24 == 0)
            hours = 0;
}

Time Time::addTime(Time t)
{
    Time t1;
    t1.hours = hours + t.hours;
    t1.min = min + t.min;
    t1.sec = sec + t.sec;
    t1.normalizeTime();
    return t1;
}

bool Time::is_Greater(Time t)
{
    if (hours > t.hours)
        return true;
    else if (hours < t.hours)
        return false;

    if (min > t.min)
        return true;
    else if (min < t.min)
        return false;

    if (sec > t.sec)
        return true;
    else
        return false;
}
void f2()
{

    cout << "\n*************************************************************************\n";
    cout << " Q2. Define a class Time to represent a time with instance variables h, m and s\n";
    cout << "    to store hour, minute and second. Also define following methods.\n\n";
    cout << "      1.  void setTime(int, int, int)\n";
    cout << "      2.  void showTime()\n";
    cout << "      3.  void normalize()\n";
    cout << "      4.  bool is_Greater(Time)\n";
    cout << "*************************************************************************\n\n";

    Time t, t1, t2;

    t.setTime(4, 59, 63);
    t.normalizeTime();
    cout << endl;
    cout << "Your 1st Period is: ";
    t.showTime();

    t1.setTime(3, 58, 65);
    t1.normalizeTime();
    cout << "Your 2nd Period is: ";
    t1.showTime();
    cout << endl;

    cout << "Addition of two time period is: ";
    t2 = t.addTime(t1);
    t2.showTime();
    cout << endl;

    bool boolean = t.is_Greater(t1);
    if (boolean)
        cout << "Your 1st Time period is Greater.\n";
    else
        cout << "Your 2nd Time period is Greater.\n";
    cout << endl;

    cout << "\n*************************************************************************\n";
    cout << "                         End of Program 2                                 \n";
    cout << "*************************************************************************\n\n";
}
class TestResult
{
    string name;
    int roll, right, wrong, left;
    float net_Score;

    static int total_no_of_questions;
    static float right_Weightage, wrong_Weightage;

public:
    void setStudentData(string, int, int, int);
    static void setStaticValues(int, float, float);
    void showStudentData();
};

// static variables definition
int TestResult::total_no_of_questions;
float TestResult::right_Weightage;
float TestResult::wrong_Weightage;

void TestResult::setStudentData(string name, int roll, int right, int wrong)
{
    this->name = name;
    this->roll = roll;
    this->right = right;
    this->wrong = wrong;

    left = total_no_of_questions - (right + wrong);
    if (left < 0)
    {
        cout << "Warning: Right + Wrong answers exceed total questions.\n";
        left = 0;
    }

    net_Score = (right * right_Weightage) - (wrong * wrong_Weightage);
}

void TestResult::setStaticValues(int total, float rWeight, float wWeight)
{
    total_no_of_questions = total;
    right_Weightage = rWeight;
    wrong_Weightage = wWeight;
}

void TestResult::showStudentData()
{
    cout << "\nName             : " << name;
    cout << "\nRoll Number      : " << roll;
    cout << "\nTotal Questions  : " << total_no_of_questions;
    cout << "\nRight Answers    : " << right;
    cout << "\nWrong Answers    : " << wrong;
    cout << "\nUnattempted      : " << left;
    cout << "\nNet Score        : " << net_Score << "\n";
}

void f3()
{
    cout << "\n*****************************************************************************\n";
    cout << "Q3 && Q4. Define a class TestResult with properties roll_no, right, net_Score.\n";
    cout << "          Also define class properties right_Weightage, wrong_Weightage. Provide\n";
    cout << "          to set and get all the properties. And after that for Question no. 4 show-\n";
    cout << "          -same information for 5 students.\n";
    cout << "*******************************************************************************\n\n";

    int n, total;
    float rightWt, wrongWt;

    cout << "\nEnter total number of students: ";
    cin >> n;

    cout << "Enter total number of questions in the exam: ";
    cin >> total;

    cout << "Enter marks for each right answer: ";
    cin >> rightWt;

    cout << "Enter marks to deduct for each wrong answer: ";
    cin >> wrongWt;

    TestResult::setStaticValues(total, rightWt, wrongWt);

    TestResult tr[n];

    cin.ignore(); // Clear newline before reading strings

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, right, wrong;

        cout << "\nEnter Name of Student " << (i + 1) << ": ";
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter number of Right Answers: ";
        cin >> right;

        cout << "Enter number of Wrong Answers: ";
        cin >> wrong;

        cin.ignore(); // Clear newline for next getline

        tr[i].setStudentData(name, roll, right, wrong);
    }

    cout << "\n========== STUDENT RESULTS ==========\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << (i + 1) << ":";
        tr[i].showStudentData();
    }

    cout << "\n\n*************************************************************************\n";
    cout << "                         End of Program 3 && 4                                 \n";
    cout << "*************************************************************************\n\n";
}
class Matrix
{
private:
    int mat[3][3];

public:
    void inputMatrix(int matrixNo);
    void displayMatrix();
    Matrix add(Matrix);
    Matrix subtract(Matrix);
    Matrix multiply(Matrix);
    Matrix transpose();
    bool is_singular();  // <-- changed here
};

// Input matrix elements
void Matrix::inputMatrix(int matrixNo)
{
    cout << "Enter 9 elements for matrix " << matrixNo << " (3x3):\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }
}

// Display matrix
void Matrix::displayMatrix()
{
    cout << "Matrix (3x3):\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

// Add two matrices
Matrix Matrix::add(Matrix m)
{
    Matrix sum;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum.mat[i][j] = mat[i][j] + m.mat[i][j];
        }
    }
    return sum;
}

// Subtract two matrices
Matrix Matrix::subtract(Matrix m)
{
    Matrix sub;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sub.mat[i][j] = mat[i][j] - m.mat[i][j];
        }
    }
    return sub;
}

// Multiply two matrices
Matrix Matrix::multiply(Matrix m)
{
    Matrix multiply;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            multiply.mat[i][j] = 0;
            for (int t = 0; t < 3; t++)
            {
                multiply.mat[i][j] += mat[i][t] * m.mat[t][j];
            }
        }
    }
    return multiply;
}

// Transpose of matrix
Matrix Matrix::transpose()
{
    Matrix temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.mat[j][i] = mat[i][j];
        }
    }
    return temp;
}

// Check if matrix is singular
bool Matrix::is_singular()
{
    int det = 0;
    int sign = 1;

    for (int j = 0; j < 3; j++)
    {
        int col1 = (j + 1) % 3;
        int col2 = (j + 2) % 3;

        int minor = mat[1][col1] * mat[2][col2] - mat[1][col2] * mat[2][col1];

        det += sign * mat[0][j] * minor;
        sign = -sign;
    }

    return (det == 0);  // determinant 0 => singular
}

// Function to print singular/non-singular
void tranpose(Matrix m)
{
    if (m.is_singular())
        cout << "\nMatrix 1 is SINGULAR\n";
    else
        cout << "\nMatrix 1 is NON-SINGULAR\n";
}

// Main program
void f4()
{
    cout << "\n*****************************************************\n";
    cout << "Q5. Define a class Matrix to represent a 3*3 order matrix.\n";
    cout << "    Provide appropriate methods and properties to the class.\n";
    cout << "    Also define following methods in the class.\n"; 
    cout << "      1.  Matrix add(Matrix)\n";
    cout << "      2.  Matrix subtract(Matrix)\n";
    cout << "      3.  Matrix multiply(Matrix)\n";
    cout << "      4.  Matrix transpose()\n";
    cout << "      5.  bool is_singular()\n";
    cout << "*****************************************************\n\n";

    Matrix m1, m2, sum, sub, mul, t;
    
    cout << "\nMatrix 1:\n";
    m1.inputMatrix(1);

    cout << "\nMatrix 2:\n";
    m2.inputMatrix(2);

    cout << "\nMatrix 1:\n";
    m1.displayMatrix();

    cout << "\nMatrix 2:\n";
    m2.displayMatrix();

    sum = m1.add(m2);
    cout << "\nSum of matrices:\n";
    sum.displayMatrix();

    sub = m1.subtract(m2);
    cout << "\nSubtraction of matrices:\n";
    sub.displayMatrix();

    mul = m1.multiply(m2);
    cout << "\nMultiplication of matrices:\n";
    mul.displayMatrix();

    t = m1.transpose();
    cout << "\nTranspose of Matrix 1:\n";
    t.displayMatrix();

    tranpose(m1); 

    cout << "\n\n*************************************************************************\n";
    cout << "                         End of Program 5                                 \n";
    cout << "*************************************************************************\n\n";
}
int main()
{
    f4();
    return 0;
}

// if (sec > 59)
// {
//     min += sec / 60;
//     sec = sec % 60;
// }

// if (min > 59)
// {
//     hours += min / 60;
//     min = min % 60;
// }

// if (hours > 23)
// {
//     hours = hours % 24;
// }

/* getline(cin, name);
        if (name.length() > 20)
            name = name.substr(0, 20); */