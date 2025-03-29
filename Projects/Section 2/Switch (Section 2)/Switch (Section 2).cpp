#include <iostream>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

int main(int argc, char **argv)
{
    // Declare and initialize an integer variable
    int i = 1;
    
    // Switch statement to evaluate the value of i
    switch(i)
    {
        // Case when i equals 1
        case 1:
            std::cout << "i = 1\n";
            break;  // Exit the switch block
        
        // Case when i equals 20
        case 20:
            std::cout << "i = 1 or i = 20\n";
            break;  // Exit the switch block
        
        // Default case (if no other cases match)
        default:
            std::cout << "i is not 1 or 20\n";
    }
    
    return 0;
}
