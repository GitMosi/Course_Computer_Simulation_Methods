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
} films [3];  // Declare an array of 3 movies_t structs

// Function prototype for printing a movie
void printmovie (movies_t movie);

// Main function where program execution begins
int main () {
    string mystr;
    int n;

    // Loop through the array of 3 movies
    for (n=0; n<3; n++) {
        // Prompt user to enter movie title
        cout << "Enter title: ";
        getline(cin, films[n].title);
        
        // Read the next line into mystr
        getline(cin, mystr);
        
        // Convert mystr to an integer and store in film[n].year
        stringstream(mystr) >> films[n].year;
    }

    // Print the entered movies
    cout << "\nYou have entered these movies:\n";
    for (n=0; n<3; n++)
        printmovie (films[n]);

    // Return 0 to indicate successful program execution
    return 0;
}

// Function to print a movie
void printmovie (movies_t movie) {
    cout << movie.title << " (" << movie.year << ")";
}
