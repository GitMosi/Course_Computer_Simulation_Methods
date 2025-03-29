#include <iostream>
#include <cmath>
#include <string>
#include <cassert>

// Bring the standard namespace into scope
using namespace std;

// Main function entry point
int main(int argc, char **argv)
{
    // Declare and initialize a double variable
    double x = -2.0;

    // Conditional statement to check if x is negative
    if (x < 0.0)
    {
        x = 0.0;  // Set x to 0 if it's negative
    }
    cout << x << "\n";  // Output the final value of x

    // Declare and initialize an integer variable
    int i = 0;

    // Declare a double variable
    double y;

    // Conditional statements based on i
    if (i > 100)
    {
        y = 2.0;  // Set y to 2 if i is greater than 100
    }
    else if (i < 0)
    {
        y = 10.0;  // Set y to 10 if i is less than 0
    }
    else
    {
        y = 5.0;   // Set y to 5 for any other case (i == 0)
    }

    cout << y << "\n" << i << "\n";  // Output y and i

    // Declare a boolean variable
    bool flag = true;

    // Conditional statement based on flag
    if (flag)
    {
        std::cout << "This will be printed\n";
    }
    else
    {
        std::cout << "This won’t be printed\n";
    }

    // Demonstrate logical operators
    cout << "!= : " << (i != y) << "\n";  // Output result of i != y
    cout << "! : " << !flag << "\n";     // Output logical NOT of flag

    return 0;  // Successful program execution
}
