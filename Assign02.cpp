#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    // Function pointer declaration
    bool (*primePtr)(int) = isPrime;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Using function pointer to check prime
    if (primePtr(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}