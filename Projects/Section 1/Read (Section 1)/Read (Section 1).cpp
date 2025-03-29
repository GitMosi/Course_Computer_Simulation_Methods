#include <iostream>
#include <cmath>
#include <string>
#include <cassert>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
    // Declare arrays to store data from file
    double x[6], y[6];

    // Open file for reading
    std::ifstream read_file("Output.dat");

    // Check if file opened successfully
    assert(read_file.is_open());

    // Read and process 6 pairs of values from the file
    for (int i = 0; i < 6; i++)
    {
        // Read two doubles separated by a tab character
        read_file >> x[i] >> y[i];
        
        // Output the read values to console
        cout << x[i] << "\t" << y[i] << "\n";
    }

    // Close the file stream
    read_file.close();

    return 0;
}
