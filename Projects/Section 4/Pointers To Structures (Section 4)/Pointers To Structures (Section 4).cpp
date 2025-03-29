// Include necessary headers
#include <iostream>
#include <string>
#include <sstream>

// Use the standard namespace to avoid prefixing std:: to standard library elements
using namespace std;

// Define a struct named movies_t to hold information about movies
struct movies_t {
    string title;
    int year;
};

int main() {
    // Declare a variable to store input string
    string mystr;

    // Declare a movies_t object
    movies_t amovie;

    // Declare a pointer to movies_t
    movies_t* pmovie;

    // Assign the address of amovie to pmovie
    pmovie = &amovie;

    // Prompt user for movie title
    cout << "Enter title: ";
    getline(cin, pmovie->title);

    // Read the next line into mystr
    cout << "Enter year: ";
    getline(cin, mystr);

    // Convert mystr to an integer and store in pmovie->year
    (stringstream)mystr >> pmovie->year;

    // Print the entered movie information
    cout << "\nYou have entered:\n";
    cout << pmovie->title << " (" << pmovie->year << ")";

    return 0;
}
