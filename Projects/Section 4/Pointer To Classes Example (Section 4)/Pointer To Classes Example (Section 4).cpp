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
        // Constructor that takes width and height as parameters
        Rectangle(int x, int y) : width(x), height(y) {}
        
        // Method to calculate the area of the rectangle
        int area(void) { return width * height; }
};

// Main function where program execution begins
int main() {
    // Create a Rectangle object using the parameterized constructor
    Rectangle obj(3, 4);
    
    // Declare pointers to Rectangle
    Rectangle* foo, *bar, *baz;
    
    // Assign the address of obj to foo
    foo = &obj;
    
    // Dynamically allocate memory for a Rectangle object and assign it to bar
    bar = new Rectangle(5, 6);
    
    // Dynamically allocate memory for an array of 2 Rectangle objects and initialize them
    baz = new Rectangle[2] {{2, 5}, {3, 6}};
    
    // Print areas of rectangles
    cout << "obj's area: " << obj.area() << '\n';
    cout << "*foo's area: " << foo->area() << '\n';
    cout << "*bar's area: " << bar->area() << '\n';
    cout << "baz[0]'s area: " << baz[0].area() << '\n';
    cout << "baz[1]'s area: " << baz[1].area() << '\n';

    // Deallocate dynamically allocated memory
    delete bar;
    delete[] baz;

    return 0;
}
