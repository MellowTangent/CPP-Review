#include <iostream>
using namespace std;

int main()
{

    int num = 0; // holds current value/user input
    int prev_num = 0; // holds the previous number being compared


    cout << "Enter a sequence of numbers to see if they repeat: ";

    cin >> num; // seed num with first value
    prev_num = num; // set prev_num to first value

    while ( cin >> num ) // while there is still input
    {
        if (prev_num == num) // if the previous number is equal to the current number
        {
            cout << "The numbers repeat: " << num << endl;
            prev_num = num; // set previous number to current number

        }
        else // if the previous number is not equal to the current number
        {
            prev_num = num; // set previous number to current number
        }
    }

    return 0;
}