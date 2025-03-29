#include <iostream>
#include <cmath>
#include <string>
#include <cassert>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
    // Initialize arrays for x and y values
    double x[3] = {0.0, 1.0, 2.0};
    double y[3] = {1.0, 2.0, 3.0};

    // Open file for writing
    ofstream write_output("Output.dat");
    assert(write_output.is_open());  // Check if file was successfully opened

    // Write initial values to file
    for (int i = 0; i < 3; i++)
    {
        write_output << x[i] << " " << y[i] << "\n";
    }
    write_output.flush();  // Ensure data is immediately written to disk
    write_output.close();  // Close the file

    // Reopen the file in append mode
    write_output.open("Output.dat", ios::app);
    assert(write_output.is_open());  // Check if file was successfully reopened in append mode

    // Write modified values to file
    for (int i = 0; i < 3; i++)
    {
        write_output << i * x[i] << " " << i * y[i] << "\n";
    }
    write_output.flush();  // Ensure data is immediately written to disk
    write_output.close();  // Close the file

    return 0;
}
