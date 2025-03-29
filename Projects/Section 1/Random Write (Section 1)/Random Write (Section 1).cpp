#include <iostream>
#include <cassert>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char **argv)
{
    // Seed random number generator with current time
    srand(time(NULL));

    // Initialize variables
    int n = 100;
    double x, y;

    // Open file for writing
    ofstream write_output("Output.dat");

    // Check if file opened successfully
    assert(write_output.is_open());

    // Set output format to scientific notation with plus sign
    write_output.setf(ios::scientific);
    write_output.setf(ios::showpos);

    // Set precision to 15 decimal places
    write_output.precision(15);

    // Generate and write random pairs to file
    for (int i = 0; i < n; i++)
    {
        // Generate random doubles between 0 and 1
        x = double(rand()) / RAND_MAX;
        y = double(rand()) / RAND_MAX;

        // Write x and y with tab separator
        write_output << x << "\t" << y << "\n";
    }

    // Flush buffer to ensure immediate write to disk
    write_output.flush();

    // Close file stream
    write_output.close();

    return 0;
}
