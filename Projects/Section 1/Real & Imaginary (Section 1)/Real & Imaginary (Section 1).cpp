#include <iostream>
#include <cmath>

// Function prototype declaration
void CalculateRealAndImaginary(double r, double theta,
                               double * pReal,
                               double * pImaginary);

int main(int argc, char * argv[])
{
    // Input values
    double r = 3.4;
    double theta = 1.23;
    double x, y;
    
    // Call the function to calculate real and imaginary parts
    CalculateRealAndImaginary(r, theta, &x, &y);
    
    // Output the results
    std::cout << "Real part = " << x << "\n";
    std::cout << "Imaginary part = " << y << "\n";

    return 0;
}

// Function definition
void CalculateRealAndImaginary(double r, double theta,
                               double * pReal,
                               double * pImaginary)
{
    // Calculate real part
    *pReal = r * cos(theta);
    
    // Calculate imaginary part
    *pImaginary = r * sin(theta);
}
