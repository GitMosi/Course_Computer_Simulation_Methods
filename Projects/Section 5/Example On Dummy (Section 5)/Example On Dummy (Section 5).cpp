// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Define a Dummy class
class Dummy {
  public:
    // Method to check if the passed parameter is the same object
    bool isitme(Dummy& param);
};

// Implement the isitme method
bool Dummy::isitme(Dummy& param)
{
  // Compare the address of the passed parameter with the current object's address
  if (&param == this) return true;
  else return false;
}

// Main function where program execution begins
int main() {
  // Create a Dummy object named 'a'
  Dummy a;
  
  // Create a pointer to Dummy named 'b', pointing to 'a'
  Dummy* b = &a;
  
  // Check if 'b' points to 'a' and print the result
  if (b->isitme(a))
    cout << "yes, &a is b\n";
  
  // Attempt to call isitme on 'c' (which doesn't exist)
  if (b->isitme(c))
    cout << "yes, &a is b\n";
  
  return 0;
}
