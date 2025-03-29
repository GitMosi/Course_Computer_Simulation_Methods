#include <iostream>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

int main(int argc, char **argv)
{
    double x = 2.0;
    
    // Empty for loop with a semicolon
    for (int i=0; i<5; i++);  // This loop does nothing because of the semicolon
    {
        x *= 2.0;
    }
    std::cout << "x = " << x << "\n";

    // This line tests if x is equal to 4, but doesn't change x
    x == 2+2;
    // The result of the comparison (true or false) is discarded

    // This line assigns 3 to x, overwriting its previous value
    x = 3;
    // This erroneous line will alter the value of x

    // This is an incorrect comparison, not an assignment
    if (x = 4)
    {
        x = 6;
    }
    cout << x;
    return 0;
}
