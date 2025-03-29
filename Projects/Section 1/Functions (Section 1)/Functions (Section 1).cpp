#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	// cos, sin, tan, acos, asin, atan, cosh, sinh, tanh, log, log10, ceil, floor

    double x = 7.8, y = 1.65, u = -3.4, z;
    z = fmod(x, y);
    cout << z << "\n";
// remainder when x is divided by y
// z is 1.2 since 7.8 = 4*1.65 + 1.2
    z = atan2(y, x); // tangent of angle between the vector
// (x, y) and the positive x-axis
// note the ordering of y and x in
// calling the function atan2
// z is 0.208465
    cout << z << "\n";
    z = fabs(u);
// Absolute value of u
// z is 3.4
// note fabs should not be confused
// with abs (the integer equivalent)
    cout << z << "\n";
	return 0;
}
