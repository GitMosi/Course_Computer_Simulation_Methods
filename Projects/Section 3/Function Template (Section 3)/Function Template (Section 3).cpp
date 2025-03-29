// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Define a function template named 'sum' that takes two parameters of type T
template <class T>
T sum(T a, T b) {
    // Declare a variable of type T to store the result
    T result;
    
    // Add 'a' and 'b' and store the result in 'result'
    result = a + b;
    
    // Return the calculated sum
    return result;
}

// Main function where program execution begins
int main() {
    // Declare and initialize integer variables
    int i = 5, j = 6, k;
    
    // Declare and initialize floating-point variables
    double f = 2.0, g = 0.5, h;
    
    // Call the 'sum' function with integer arguments
    k = sum<int>(i, j);
    
    // Call the 'sum' function with double arguments
    h = sum<double>(f, g);
    
    // Print the results
    cout << k << '\n';  // Prints the sum of 5 and 6
    cout << h << '\n';  // Prints the sum of 2.0 and 0.5
    
    // Return 0 to indicate successful program execution
    return 0;
}
