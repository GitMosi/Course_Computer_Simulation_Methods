// Include necessary headers
#include <iostream>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Main function where program execution begins
int main() {
    // Declare an array of 5 integers
    int numbers[5];
    
    // Declare a pointer to integers
    int *p;
    
    // Initialize p to point to the beginning of the numbers array
    p = numbers;
    
    // Store 10 in the first element of the array
    *p = 10;
    
    // Move p to the next element (index 1)
    p++;
    
    // Store 20 in the second element
    *p = 20;
    
    // Set p to point to the third element (index 2)
    p = &numbers[2];
    
    // Store 30 in the third element
    *p = 30;
    
    // Set p to point to the fourth element (index 3)
    p = numbers + 3;
    
    // Store 40 in the fourth element
    *p = 40;
    
    // Set p back to the start of the array
    p = numbers;
    
    // Store 50 in the fifth element using pointer arithmetic
    *(p+4) = 50;
    
    // Print all elements of the array
    for (int n = 0; n < 5; n++)
        cout << numbers[n] << ", ";
    
    return 0;
}
