// Include the iostream header for input/output operations
#include <iostream>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Define a CVector class
class CVector {
    // Public members
    public:
        int x,y;
        
        // Default constructor
        CVector () {};
        
        // Constructor that initializes x and y
        CVector (int a,int b) : x(a), y(b) {}
        
        // Declare operator+ function
        CVector operator + (const CVector& param);
};

// Define the operator+ function as a member of the CVector class
CVector CVector::operator+ (const CVector& param) {
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}

// Main function where program execution begins
int main () {
  // Create two CVector objects
  CVector foo (3,1);
  CVector bar (1,2);

  // Create a result variable
  CVector result;

  // Add foo and bar using the overloaded + operator
  result = foo + bar;

  // Print the result
  cout << result.x << ',' << result.y << '\n';
  
  // Return 0 to indicate successful program execution
  return 0;
}
