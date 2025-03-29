#include <cassert>
#include <iostream>
#include <fstream>
#include <iomanip>      // std::setw

using namespace std;

int main(int argc, char *argv[])
{
    // Declare arrays to store data from file
    double x[100], y[100];

    // Open file for reading
    std::ifstream read_file("Output.dat");

    // Check if file opened successfully
    assert(read_file.is_open());

    int i = 0;
    while(!read_file.eof())
    {
        // Read two doubles separated by a tab character
        read_file >> x[i] >> y[i];
        
        // Format output with 10 spaces width and 8 decimal places precision
        cout << setw(10) << setprecision(8) << x[i] << "\t" << setw(10) << setprecision(8) << y[i] << "\n";
        
        i++;  // Increment counter
    }

    // Close the file stream
    read_file.close();

    return 0;
}
