#include <iostream>
#include <cmath>
#include <string>
#include <cassert>
#include <fstream>

using namespace std;
int main(int argc, char **argv)
{
    double x = 1.83642386795686578786;
    std::ofstream write_output("Output.dat");
    
    // Set precision to 3 significant figures
    write_output.precision(3); 
    write_output << x << "\n";

    // Set precision to 5 significant figures
    write_output.precision(5); 
    write_output << x << "\n";

    // Set precision to 20 significant figures
    write_output.precision(20); 
    write_output << x << "\n";

    // Set precision back to cout's default (usually 6)
    cout.precision(10);
    cout << x;

    write_output.close();
    return 0;
}
