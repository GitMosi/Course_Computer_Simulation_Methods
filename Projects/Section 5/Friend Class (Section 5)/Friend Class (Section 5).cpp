// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Declare the Square class before using it in Rectangle
class Square;

// Define the Rectangle class
class Rectangle {
    int width, height;
  public:
    // Method to calculate the area of the rectangle
    int area() { return width * height; }
    
    // Method to convert a Square to a Rectangle
    void convert(Square a);
};

// Define the Square class
class Square {
    friend class Rectangle;  // Make Rectangle a friend of Square
    private:
        int side;
    public:
        // Constructor for Square
        Square(int a) : side(a) {}
};

// Implement the convert method of Rectangle
void Rectangle::convert(Square a) {
    width = a.side;
    height = a.side;
}

// Main function
int main() {
    // Create a Rectangle object
    Rectangle rect;
    
    // Create a Square object
    Square sqr(4);
    
    // Convert the Square to a Rectangle and calculate its area
    rect.convert(sqr);
    cout << rect.area();  // Output: 16
    
    return 0;
}
