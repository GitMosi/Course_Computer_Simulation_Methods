// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Define the CVector class
class CVector {
  public:
    // Member variables for x and y coordinates
    int x, y;
    
    // Default constructor
    CVector() {}
    
    // Constructor with parameters
    CVector(int a, int b) : x(a), y(b) {}
};

// Non-member operator overload for addition (+)
CVector operator+ (const CVector& lhs, const CVector& rhs) {
  CVector temp;
  temp.x = lhs.x + rhs.x;
  temp.y = lhs.y + rhs.y;
  return temp;
}

// Main function
int main() {
  // Create two CVector objects
  CVector foo(3, 1);
  CVector bar(1, 2);
  
  // Create a result variable
  CVector result;
  
  // Use the overloaded operator to add foo and bar
  result = foo + bar;
  
  // Print the result
  cout << result.x << ',' << result.y << '\n';
  
  return 0;
}
