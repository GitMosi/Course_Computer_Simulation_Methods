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
        Circle(double r) : radius(r) { }
        
        // Method to calculate the area of the circle
        double area() {return radius*radius*3.14159265;}
};

// Define a Cylinder class that inherits from Circle
class Cylinder {
    // Base circle object
    Circle base;
    
    // Private member variable to store the height
    double height;
    
    // Public section of the class
    public:
        // Constructor that initializes both base and height
        Cylinder(double r, double h) : base(r), height(h) {}
        
        // Method to calculate the volume of the cylinder
        double volume() {return base.area() * height;}
};

// Main function where program execution begins
int main () {
  // Create a Cylinder object with radius 10 and height 20
  Cylinder foo (10,20);

  // Print the volume of the cylinder
  cout << "foo's volume: " << foo.volume() << '\n';
  
  // Return 0 to indicate successful program execution
  return 0;
}

	

foo's volume: 6283.19

	
Edit & Run
