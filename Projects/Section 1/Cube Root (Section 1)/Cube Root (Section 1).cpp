#include <cmath>
#include <iostream>

using namespace std;

// Function prototype for calculating cube root
void CalculateCubeRoot(double& x, double K,
                       double tolerance = 1.0e-6,
                       int maxIterations = 100);

int main(int argc, char * argv[])
{
    // Initial values for x and K
    double x = 1.0;
    double K = 12.0;

    // Calculate cube root using default values
    CalculateCubeRoot(x, K);

    // Calculate cube root using a tolerance of 0.001 and the default maximum number of iterations
    double tolerance = 0.001;
    CalculateCubeRoot(x, K, tolerance);

    // Calculate cube root using a tolerance of 0.001 and a maximum number of iterations of 50
    int maxIterations = 50;
    CalculateCubeRoot(x, K, tolerance, maxIterations);

    return 0;
}

// Function to calculate cube root
void CalculateCubeRoot(double& x, double K,
                       double tolerance, int maxIterations)
{
    int iterations = 0;
    double residual = x*x*x-K;

    // Print maxIterations and tolerance for debugging
    cout << maxIterations << "\t" << tolerance << endl;

    while ((fabs(residual) > tolerance) &&
           (iterations < maxIterations))
    {
        // Newton-Raphson method for cube root calculation
        x = x-(x*x*x-K)/(3.0*x*x);
        
        // Update residual
        residual = x*x*x-K;
        
        // Increment iterations
        iterations++;
    }
}
