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
        // Method to set values for width and height
        void set_values (int x, int y);
        
        // Method to calculate the area of the rectangle
        int area () {return width*height;}
};

// Define the set_values method as a member of the Rectangle class
void Rectangle::set_values (int x, int y) {
    width = x;
    height = y;
}

// Main function where program execution begins
int main () {
    // Create two Rectangle objects
    Rectangle rect, rectb;
    
    // Set values for the first rectangle
    rect.set_values (3,4);
    
    // Set values for the second rectangle
    rectb.set_values (5,6);

    // Print the areas of the rectangles
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    
    // Return 0 to indicate successful program execution
    return 0;
}
