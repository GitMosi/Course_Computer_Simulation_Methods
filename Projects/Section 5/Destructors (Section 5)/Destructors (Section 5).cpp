// Include necessary headers
#include <iostream>
#include <string>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Define a class Example4
class Example4 {
    // Private member variable: a pointer to a string object
    string* ptr;
    
  public:
    // Default constructor
    Example4() : ptr(new string()) {}
    
    // Constructor taking a const reference to a string
    Example4(const string& str) : ptr(new string(str)) {}
    
    // Destructor
    ~Example4 () { delete ptr; }
    
    // Method to access the content of the string
    const string& content() const { return *ptr; }
};

// Main function
int main() {
  // Create an Example4 object foo (uses default constructor)
  Example4 foo;
  
  // Create an Example4 object bar with a string argument
  Example4 bar ("Example");

  // Print the content of bar
  cout << "bar's content: " << bar.content() << '\n';
  
  return 0;
}
