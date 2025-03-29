// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Define a Circle class
class Circle {
    // Private member variable to store the radius
    double radius;
    
    // Public section of the class
    public:
        // Constructor that initializes the radius
        Circle(double r) { radius = r; }
        
        // Method to calculate the circumference of the circle
        double circum() {return 2*radius*3.14159265;}
};

// Main function where program execution begins
int main () {
  // Initialize Circle objects using different initialization methods
  Circle foo (10.0);   // Functional form
  Circle bar = 20.0;   // Assignment initialization
  Circle baz {30.0};   // Uniform initialization
  Circle qux = {40.0}; // POD-like uniform initialization

  // Print the circumference of foo circle
  cout << "foo's circumference: " << foo.circum() << '\n';
  
  // Return 0 to indicate successful program execution
  return 0;
}
