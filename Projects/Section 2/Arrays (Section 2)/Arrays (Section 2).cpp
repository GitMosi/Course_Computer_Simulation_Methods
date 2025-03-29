#include <iostream>
#include <cmath>

// Bring the standard namespace into scope
using namespace std;

// Main function entry point
int main(int argc, char **argv)
{
    // Declare and initialize 1D integer array with 2 elements
    int array1[2];
    
    // Declare and initialize 2D double array with 2 rows and 3 columns
    double array2[2][3];
    
    // Assign value to specific element
    array2[0][1] = 3;
    
    // Output assigned value
    cout << array2[0][1] << "\n";
    
    // Declare and initialize 3D double array with 3 elements
    double array3[3] = {5.0, 1.0, 2.0};
    
    // Declare and initialize 4D integer array with 2x3 dimensions
    int array4[2][3] = { {1, 6, -4}, {2, 2, 2} };
}
