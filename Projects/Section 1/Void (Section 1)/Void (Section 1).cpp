#include <iostream>
using namespace std;

void PrintPassOrFail(int score, int passMark);

int main(int argc, char * argv[])
{
    // Define variables for score and pass mark
    int score = 29;
    int pass_mark = 30;

    // Call the function to print pass or fail message
    PrintPassOrFail(score, pass_mark);

    return 0;
}

void PrintPassOrFail(int score, int passMark)
{
    // Use ternary operator to conditionally execute code
    score >= passMark ? cout << "Pass - congratulations!\n" : 
                       cout << "Fail - better luck next time\n";
}
