// Include necessary headers
#include <iostream>
#include <cmath>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Define the Velocity class
class Velocity {
  private:
    // Array to store x, y, z components of velocity
    double v[3];
    
  public:
    // Default constructor
    Velocity() {}
    
    // Constructor with parameters
    Velocity(double v0, double v1, double v2);
    
    // Operator overload for addition
    Velocity operator + (const Velocity& param);
    
    // Method to calculate speed
    double speed() {
        return sqrt(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]);
    }
};

// Implement the constructor
Velocity::Velocity(double v0, double v1, double v2) {
    v[0] = v0;
    v[1] = v1;
    v[2] = v2;
}

// Implement the operator overload
Velocity Velocity::operator+(const Velocity& param) {
    Velocity temp;
    temp.v[0] = v[0] + param.v[0];
    temp.v[1] = v[1] + param.v[1];
    temp.v[2] = v[2] + param.v[2];
    return temp;
}

// Main function
int main() {
    // Create Velocity objects
    Velocity v0(0, -5, 1);
    Velocity v1(2, 3, 0);
    Velocity v2;  // Default constructor
    
    // Add velocities
    v2 = v0 + v1;
    
    // Print speeds
    cout << v0.speed() << endl;
    cout << v1.speed() << endl;
    cout << v2.speed() << endl;
    
    return 0;
}
