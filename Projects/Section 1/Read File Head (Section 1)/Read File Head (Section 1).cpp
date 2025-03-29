#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    // Print the total number of command line arguments
    cout << "Number of command line arguments = " << argc << "\n";

    // Iterate through all command line arguments
    for (int i = 0; i < argc; i++)
    {
        // Print each argument along with its index
        cout << "Argument " << i << " = " << argv[i] << "\n";
    }

    // Get the program name from argv[0]
    string program_name = argv[0];

    // Convert the second command line argument to an integer
    int number_of_nodes = atoi(argv[1]);

    // Convert the third command line argument to a float
    double conductivity = atof(argv[2]);

    // Print the extracted information
    cout << "Program name = " << program_name << "\n";
    cout << "Number of nodes = " << number_of_nodes << "\n";
    cout << "Conductivity = " << conductivity << "\n";

    return 0;
}
