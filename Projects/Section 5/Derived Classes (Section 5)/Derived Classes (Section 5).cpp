// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Define a Polygon class
class Polygon {
  protected:
    // Protected member variables for width and height
    int width, height;
    
  public:
    // Method to set values for width and height
    void set_values(int a, int b) 
    { 
      width = a;
      height = b;
    }
};

// Define a Rectangle class that inherits from Polygon
class Rectangle: public Polygon {
  public:
    // Method to calculate the area of a rectangle
    int area() 
    { 
      return width * height; 
    }
};

// Define a Triangle class that inherits from Polygon
class Triangle: public Polygon {
  public:
    // Method to calculate the area of a triangle
    int area() 
    { 
      return width * height / 2; 
    }
};

// Main function where program execution begins
int main() {
  // Create a Rectangle object
  Rectangle rect;
  
  // Create a Triangle object
  Triangle trgl;
  
  // Set values for both objects
  rect.set_values(4, 5);
  trgl.set_values(4, 5);
  
  // Calculate and display areas
  cout << rect.area() << '\n';
  cout << trgl.area() << '\n';
  
  return 0;
}
