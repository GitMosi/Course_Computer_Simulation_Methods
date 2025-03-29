// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Define a Mother class
class Mother {
  public:
    // Default constructor
    Mother() 
    { 
      cout << "Mother: no parameters\n";
    }
    
    // Constructor taking an int parameter
    Mother(int a)
    { 
      cout << "Mother: int parameter\n";
    }
};

// Define a Daughter class that inherits from Mother
class Daughter : public Mother {
  public:
    // Constructor for Daughter
    Daughter(int a)
    { 
      cout << "Daughter: int parameter\n\n";
    }
};

// Define a Son class that inherits from Mother
class Son : public Mother {
  public:
    // Constructor for Son
    Son(int a) : Mother(a) 
    { 
      cout << "Son: int parameter\n\n";
    }
};

// Main function where program execution begins
int main() {
  // Create a Daughter object with int parameter
  Daughter kelly(0);
  
  // Create a Son object with int parameter
  Son bud(0);
  
  return 0;
}
