#include <iostream>
using namespace std;

int main()
{
    int firstvalue, secondvalue;
    int *mypointer;

    // mypointer points to firstvalue
    mypointer = &firstvalue;
    
    // Store 10 at the address pointed to by mypointer (i.e., firstvalue)
    *mypointer = 10;

    // mypointer now points to secondvalue
    mypointer = &secondvalue;
    
    // Store 20 at the address pointed to by mypointer (i.e., secondvalue)
    *mypointer = 20;

    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';

    return 0;
}
