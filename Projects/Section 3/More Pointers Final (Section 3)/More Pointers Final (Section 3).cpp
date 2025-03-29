#include <iostream>
using namespace std;

int main()
{
    int firstvalue = 5, secondvalue = 15;
    int *p1, *p2;

    // p1 points to firstvalue
    p1 = &firstvalue;  

    // p2 points to secondvalue  
    p2 = &secondvalue;

    // Store 10 in the integer pointed to by p1 (i.e., firstvalue)
    *p1 = 10;

    // Store the value pointed to by p1 (which is 10) in the integer pointed to by p2 (which is secondvalue)
    *p2 = *p1; 

    // Make p1 point to the same memory location as p2
    p1 = p2;

    // Now that p1 points to secondvalue, store 20 there
    *p1 = 20;

    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';

    return 0;
}
