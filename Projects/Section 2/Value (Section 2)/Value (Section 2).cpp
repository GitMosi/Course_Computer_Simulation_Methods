#include <iostream>
using namespace std;

int main ()
{
    int firstvalue = 5, secondvalue = 15;
    int * p1, * p2;

    // Store addresses of firstvalue and secondvalue in p1 and p2
    p1 = &firstvalue;  
    p2 = &secondvalue;

    // Change the value pointed to by p1 to 10
    *p1 = 10;

    // Assign the value pointed to by p1 to the value pointed to by p2
    *p2 = *p1;

    // Make p1 point to the same location as p2
    p1 = p2;

    // Change the value pointed to by p1 to 20
    *p1 = 20;
  
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';

    return 0;
}
