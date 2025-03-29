// classes example
#include <iostream>
#include <cmath> // Include the cmath library for mathematical functions
using namespace std; // Use standard namespace

class Particle {
private:
    double x,y,z, vx,vy,vz, m; // Private member variables representing position and velocity components
public:
    int d; // Public integer variable
    void set_values(double,double,double,double,double,double,double); // Function prototype for setting particle properties
    double speed() { // Method to calculate speed
        return sqrt(vx*vx+vy*vy+vz*vz); // Return square root of sum of squares of velocity components
    }
    double momentum() { // Method to calculate momentum
        return m*speed(); // Return mass times speed
    }
    double energy() { // Method to calculate kinetic energy
        double s=speed(); // Calculate speed
        return 1.0/2*m*s*s; // Return 1/2 mass times speed squared
    }
};

void Particle::set_values (double x1,double y1,double z1, double vx1,double vy1,double vz1, double m1) { // Implementation of set_values method
  x = x1;
  y=y1;
  z=z1;
  vx = vx1;
  vy=vy1;
  vz=vz1;
  m=m1;
}

int main () {
  Particle p0, p1; // Create two Particle objects
  p0.set_values(0,-5,1,1,1,1,1); // Set initial values for p0
  //double d=p0.x; // Commented out line
  cout << p0.speed() << endl; // Print speed of p0
  cout << p0.momentum() << endl; // Print momentum of p0
  cout << "energy: " << p0.energy(); // Print energy of p0
  return 0;
}
