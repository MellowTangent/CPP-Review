#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    cout << "This program finds the maximum and minimum of a sequence of numbers." << endl;
    cout <<  "Type a sequence of numbers: ";
    cout << endl;

    int num = 0;
    cin >> num; // read the first number from the buffer

    int max_num = num; // seed "max_num" with the first number
    int min_num = num; // seed "min_num" with the first number

    while (cin >> num) // get next number from the buffer, returns false if no more numbers are available
    {
        max_num = max(num, max_num); // compares prev value "max_num" with the new value "num" and returns the larger of the two
        min_num = min(num, min_num); // compares prev value "min_num" with the new value "num" and returns the smaller of the two
    }
    cout << "The max is: " << max_num << endl; //print the max value
    cout << "The min is: " << min_num << endl; //print the min value
    return 0;
}