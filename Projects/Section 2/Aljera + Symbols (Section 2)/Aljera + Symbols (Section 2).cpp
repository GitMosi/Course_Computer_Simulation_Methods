#include <iostream>
#include <cmath>

// Bring the standard namespace into scope
using namespace std;

// Main function entry point
int main(int argc, char **argv)
{
    // Initialize integer variables
    int i = 0;
    
    // Declare and initialize variables
    int row = 1, column = 2;
    double temperature = 3.0;
    double tolerance = 1.0e-12;
    
    // Declare and initialize variables
    double x = 1.0, y = 2.0, z;
    
    // Perform division operation
    z = x/y;
    cout << z << "\n";  // Output result
    
    // Calculate square root of x
    z = sqrt(x);
    cout << z << "\n";  // Output result
    
    // Calculate exponential of y
    z = exp(y);
    cout << z << "\n";  // Output result
    
    // Calculate power of x raised to y
    z = pow(x, y);
    cout << z << "\n";  // Output result
    
    // Output constant pi
    z = M_PI;
    cout << z << "\n";  // Output result
    
    // Output temperature value
    cout << temperature;

    // Uncommented section showing available trigonometric and mathematical functions
    // cos, sin, tan, acos, asin, atan, cosh, sinh, tanh, log, log10, ceil, floor

    return 0;  // Successful program execution
}
