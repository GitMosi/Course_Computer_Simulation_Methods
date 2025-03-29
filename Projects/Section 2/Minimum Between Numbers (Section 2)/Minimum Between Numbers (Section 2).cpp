#include <iostream>

// Function declaration for CalculateMinimum
double CalculateMinimum(double a, double b);

int main(int argc, char * argv[])
{
    // Declare and initialize variables
    double x = 4.0, y = -8.0;
    
    // Call the CalculateMinimum function and store the result
    double minimum_value = CalculateMinimum(x, y);
    
    // Output the result
    std::cout << "The minimum of " << x << " and " << y
              << " is " << minimum_value << "\n";
    
    return 0;
}

// Function definition for CalculateMinimum
double CalculateMinimum(double a, double b)
{
    // Return the smaller of a and b
    return a < b ? a : b;
}
