#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    // Declare and initialize integer variables
    int x = 1, y = 2;
    
    // Print the values of x and y
    cout << "x = " << x << " and y = " << y << "\n";

    // Demonstrate escape sequences
    cout << "a\tb'\tc\"\td\?\n\a";

    // Flush stdout to ensure immediate display
    std::cout.flush();

    // Declare and initialize integer variable for PIN
    int pin;

    // Prompt user for PIN and read input
    cout << "Enter your PIN, then hit RETURN\n";
    std::cin >> pin;

    // Print the entered PIN
    cout << pin << "\n";

    // Declare and initialize integer variable for account number
    int account_number;

    // Prompt user for account number and PIN
    std::cout << "Enter your account number\n";
    std::cout << "and then your PIN followed by RETURN\n";
    std::cin >> account_number >> pin;

    return 0;
}
