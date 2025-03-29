#include <iostream>
using namespace std;

// Function to duplicate values passed by reference
void duplicate(int& a, int& b, int& c) {
    // Multiply each value by 2
    a *= 2;
    b *= 2;
    c *= 2;
}

int main()
{
    // Declare variables
    int x = 1, y = 3, z = 7;
    
    // Pass variables by reference to the duplicate function
    duplicate(x, y, z);
    
    // Print the modified values
    cout << "x=" << x << ", y=" << y << ", z=" << z;
    
    return 0;
}
