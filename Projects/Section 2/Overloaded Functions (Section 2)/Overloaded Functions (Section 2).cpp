// overloaded functions
#include <iostream>
using namespace std;

// Function to calculate the sum of two integers
int sum (int a, int b)
{
  return a+b;
}

// Function to calculate the sum of two doubles
double sum (double a, double b)
{
  return a+b;
}

int main ()
{
  // Call sum function with integers
  cout << sum (10,20) << '\n';

  // Call sum function with doubles
  cout << sum (1.0,1.5) << '\n';

  return 0;
}
