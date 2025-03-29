#include <iostream>
using namespace std;

// Function to multiply two integers
int operate(int a, int b) {
    return (a * b);
}

// Function to divide two doubles
double operate(double a, double b) {
    return (a / b);
}

int main()
{
    int x = 5, y = 2;
    double n = 5.0, m = 2.0;

    // Call operate() with integer arguments
    cout << operate(x, y) << '\n';

    // Call operate() with double arguments
    cout << operate(n, m) << '\n';

    return 0;
}
