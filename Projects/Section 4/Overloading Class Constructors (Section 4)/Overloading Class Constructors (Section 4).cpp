// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Define a Rectangle class
class Rectangle {
    // Private member variables to store width and height
    int width, height;
    
    // Public section of the class
    public:
        // Default constructor (no arguments)
        Rectangle ();
        
        // Constructor with two integer parameters
        Rectangle (int,int);
        
        // Method to calculate the area of the rectangle
        int area (void) {return (width*height);}
};

// Define the default constructor
Rectangle::Rectangle () {
    width = 5;
    height = 5;
}

// Define the constructor with parameters
Rectangle::Rectangle (int a, int b) {
    width = a;
    height = b;
}

// Main function where program execution begins
int main () {
    // Create a Rectangle object using the parameterized constructor
    Rectangle rect (3,4);
    
    // Create another Rectangle object using the default constructor
    Rectangle rectb;

    // Print the areas of the rectangles
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    
    // Return 0 to indicate successful program execution
    return 0;
}
