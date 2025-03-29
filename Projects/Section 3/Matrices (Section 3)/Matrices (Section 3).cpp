// Include necessary headers
#include <iostream>
#include <cmath>
#include <math.h>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Main function where program execution begins
int main() {
    // Declare pointers for double type
    double *x;
    double *y;

    // Dynamically allocate memory for an array of 10 doubles
    x = new double[10];
    y = new double[10];

    // Loop through the allocated array
    for (int i = 0; i < 10; i++) {
        // Assign values to x array
        x[i] = ((double)(i));
        
        // Calculate twice the value of x[i] and store in y[i]
        y[i] = 2.0 * x[i];
        
        // Print the values of x[i] and y[i]
        cout << x[i] << "\t" << y[i] << endl;
    }

    // Deallocate the dynamically allocated memory
    delete[] x;
    delete[] y;

    return 0;
}
