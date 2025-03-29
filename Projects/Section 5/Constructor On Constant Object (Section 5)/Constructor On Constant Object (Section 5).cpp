// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Define a MyClass class
class MyClass {
  // Public section of the class
  public:
    // Member variable to store an integer value
    int x;
    
    // Constructor that initializes x with the provided value
    MyClass(int val) : x(val) {}
    
    // Method to retrieve the value of x
    int get() {return x;}
};

// Main function where program execution begins
int main() {
  // Create a const object of MyClass with x=10
  const MyClass foo(10);
  
  // Attempt to modify the x member (commented out as it's not valid)
  // foo.x = 20;
  
  // Read the value of x (valid operation for const objects)
  cout << foo.x << '\n';
  
  // Return 0 to indicate successful program execution
  return 0;
}
