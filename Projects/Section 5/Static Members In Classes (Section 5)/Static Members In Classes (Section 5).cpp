// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Define the Dummy class
class Dummy {
  public:
    // Declare a static integer member variable
    static int n;
    
    // Constructor for Dummy
    Dummy() { n++; }
};

// Initialize the static member variable
int Dummy::n = 0;

// Main function
int main() {
  // Create a Dummy object
  Dummy a;
  
  // Create an array of 5 Dummy objects
  Dummy b[5];
  
  // Print the value of n
  cout << a.n << '\n';
  
  // Dynamically allocate a Dummy object
  Dummy* c = new Dummy;
  
  // Print the value of n again
  cout << Dummy::n << '\n';
  
  // Deallocate the dynamically allocated object
  delete c;
  
  return 0;
}
