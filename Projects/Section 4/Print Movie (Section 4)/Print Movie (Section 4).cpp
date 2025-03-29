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
} mine, yours;

// Function prototype for printing a movie
void printmovie(movies_t movie);

int main() {
    string mystr;

    // Initialize mine with a specific movie
    mine.title = "2001 A Space Odyssey";
    mine.year = 1968;

    cout << "Enter title: ";
    getline(cin, yours.title);
    
    cout << "Enter year: ";
    getline(cin, mystr);
    stringstream(mystr) >> yours.year;

    cout << "My favorite movie is:\n ";
    printmovie(mine);
    cout << "And yours is:\n ";
    printmovie(yours);
    return 0;
}

void printmovie(movies_t movie) {
    cout << movie.title << " (" << movie.year << ")";
}
