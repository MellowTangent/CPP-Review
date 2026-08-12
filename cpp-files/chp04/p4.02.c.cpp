#include <iostream>
using namespace std;

int main ()
{

    int num = 0; // holds user input
    int accumulator = 0; // accumulator for sum of numbers

    cout << "Enter a sequence of numbers to be summed: ";

    while ( cin >> num) // get next number from the buffer, returns false if no more numbers are available
    {
        accumulator += num; // add the new value of "num" to the accumulator
        cout << "The running total is: " << accumulator << endl; // print the running total
    }

    return 0;
}