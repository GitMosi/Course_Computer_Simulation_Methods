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
        // Constructor declaration
        Rectangle (int,int);
        
        // Method to calculate the area of the rectangle
        int area () {return (width*height);}
};

// Define the constructor for the Rectangle class
Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

// Main function where program execution begins
int main () {
  // Create two Rectangle objects
  Rectangle rect (3,4);
  Rectangle rectb (5,6);

  // Print the areas of the rectangles
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  
  // Return 0 to indicate successful program execution
  return 0;
}
