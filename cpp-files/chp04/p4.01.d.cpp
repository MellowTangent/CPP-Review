#include <iostream>
using namespace std;

int main () 
{
    int a = 0;
    int b = 0;
    int sum = 0;
    
    cout << "Enter the first number: ";
    cin >> a;
    cout << endl;

    bool even = a % 2; // check if "a" is even or odd

    cout << "Enter the second number: ";
    cin >> b;
    cout << endl;

    if (even == 0) // if "a" is even we add 1 to it and add it to the accumulator "sum"
    {
        a = a + 1;
        sum += a;
//        cout << sum << endl; // for debugging
        while (a + 2 <= b) // "a" is now odd so we continously add 2 until we reach upper bound "b"
        {
            a = a + 2; // computes next odd number
            sum += a; // accumulator for when "a" is odd 
//            cout << a << endl; // for debugging
        }
    }
    else // if "a" is odd we skip the body of the if statement and continue here
    {
        sum += a; // "a" is already odd so we add it to the accumulator
//        cout << sum << endl; // for debugging
        while (a + 2 <= b)
        {
            a = a + 2; // computes next odd number
            sum += a; // accumulator for when "a" is odd
//            cout << a << endl; // for debugging
        }
    }
    cout << "The sum of all odd numbers for the given interval is: " << sum << endl;
    return 0;
}