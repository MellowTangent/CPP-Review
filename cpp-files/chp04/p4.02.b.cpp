#include <iostream>
using namespace std;

int main ()
{

    int num = 0; // holds user input
    int counter_even = 0; // counter for even numbers
    int counter_odd = 0; // counter for odd numbers
    
    cout << "Enter a number: "; 

    while (cin >> num) // get next number from the buffer, returns false if no more numbers are available
    {
        if (num % 2 == 0) // check if "num" is even or odd
        {
            counter_even++; // increment counter for even numbers
        }
        else // else we assume they are odd
        {
            counter_odd++; // increment counter for odd numbers
        }
    }
    cout << "The number of even numbers entered is: " << counter_even << endl;
    cout << "The number of odd numbers entered is: " << counter_odd << endl;
    return 0;
}
