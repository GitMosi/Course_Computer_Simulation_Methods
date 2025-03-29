#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
    int i = 5, j = 2;
    double k;
    
    // Explicitly cast one of the integers to double
    k = ((double)(i)) / ((double)(j));
    
    std::cout << k << "\n";
    
    return 0;
}
