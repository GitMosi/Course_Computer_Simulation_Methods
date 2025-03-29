// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Declare the Square class before using it in Rectangle
class Square;

// Define the Polygon class
class Polygon {
    protected:
        int width, height;
    public:
        // Constructor for Polygon
        Polygon(int a, int b) : width(a), height(b) {}
};

// Define the Output class
class Output {
    public:
        // Static method to print an integer
        static void print(int i);
};

// Implement the print method of Output
void Output::print(int i) {
    cout << i << '\n';
}

// Define the Rectangle class inheriting from Polygon and Output
class Rectangle: public Polygon, public Output {
    public:
        // Constructor for Rectangle
        Rectangle(int a, int b) : Polygon(a,b) {}
        
        // Method to calculate the area of a rectangle
        int area() { return width*height; }
};

// Define the Triangle class inheriting from Polygon and Output
class Triangle: public Polygon, public Output {
    public:
        // Constructor for Triangle
        Triangle(int a, int b) : Polygon(a,b) {}
        
        // Method to calculate the area of a triangle
        int area() { return width*height/2; }
};

// Main function
int main() {
    // Create a Rectangle object
    Rectangle rect(4,5);
    
    // Create a Triangle object
    Triangle trgl(4,5);
    
    // Call the print method on rect and pass the area
    rect.print(rect.area());
    
    // Call the print method on trgl and pass the area
    Triangle::print(trgl.area());
    
    return 0;
}
