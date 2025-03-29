#include <iostream>
#include <cmath>
#include <string>  // Include string header for string functionality

// Bring the standard namespace into scope
using namespace std;

// Main function entry point
int main(int argc, char **argv)
{
    // Declare a character variable
    char letter;
    letter = 'a';  // Note the single quotation marks for character literals
    cout << "The character is " << letter << "\n";

    // Declare boolean variables
    bool flag1, flag2;
    flag1 = true;
    flag2 = false;

    // Declare a string variable
    std::string city;  // Note the std:: prefix for string type

    // Initialize string with a value
    city = "Oxford";

    // Demonstrate string methods
    std::cout << "String length = " << city.length() << "\n";
    std::cout << "Third character = " << city.at(2) << "\n";
    std::cout << "Third character = " << city[2] << "\n";  // Both at() and [] access same element
    std::cout << city << "\n";  // Prints the entire string
    std::cout << city.c_str() << "\n";  // Also prints the string content

    // Read input from user
    std::string name;
    std::cout << "Enter your name and then hit RETURN\n";
    std::getline(std::cin, name);  // Use getline for strings
    std::cout << "Your name is " << name << "\n";
}
