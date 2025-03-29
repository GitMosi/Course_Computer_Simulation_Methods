// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Function to divide two integers with a default value for 'b'
int divide(int a, int b = 2) {
    // Declare a variable to store the result
    int r;
    
    // Perform the division operation
    r = a / b;
    
    // Return the result
    return (r);
}

// Main function where program execution begins
int main() {
    // Print the result of dividing 12 by the default value (2)
    cout << divide(12) << '\n';
    
    // Print the result of dividing 20 by 4 (explicitly passing both arguments)
    cout << divide(20, 4) << '\n';
    
    // Return 0 to indicate successful program execution
    return 0;
}
