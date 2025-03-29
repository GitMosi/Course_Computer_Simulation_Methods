// Function template
#include <iostream>
using namespace std;

// Define a function template that takes two arguments of type T and returns T
template <class T>
T sum(T a, T b)
{
  T result;
  result = a + b;
  return result;
}

int main()
{
  // Declare and initialize integer variables
  int i = 5, j = 6, k;
  
  // Declare and initialize floating-point variables
  double f = 2.0, g = 0.5, h;

  // Call the sum function with integer types
  k = sum<int>(i, j);

  // Call the sum function with double types
  h = sum<double>(f, g);

  // Output the results
  cout << k << '\n';  // Prints the sum of integers
  cout << h << '\n';  // Prints the sum of doubles

  return 0;
}
