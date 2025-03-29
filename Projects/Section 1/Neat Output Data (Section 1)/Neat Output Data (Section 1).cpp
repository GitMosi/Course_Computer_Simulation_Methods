#include <fstream>  // Include the iostream library for file operations
using namespace std;  // Allow use of standard library elements without prefix

int main(int argc, char * argv[])  // Main function declaration
{
    ofstream write_file("OutputFormatted.dat");  // Open a file named OutputFormatted.dat for writing
    
    // Set formatting options for scientific notation with a plus sign
    write_file.setf(ios::scientific);  
    write_file.setf(ios::showpos);
    
    // Set precision to 13 digits after the decimal point
    write_file.precision(13);
    
    double x = 3.4, y = 0.0000855, z = 984.424;  // Declare and initialize variables
    
    // Write formatted values to the file
    write_file << x << " " << y << " " << z << "\n";
    
    write_file.close();  // Close the file stream
    
    return 0;  // Return success code
}
