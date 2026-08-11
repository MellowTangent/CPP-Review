#include <iostream>
using namespace std;

int main ()
{
    cout << "This program will sum all the odd digits of a given number." << endl;
    
    int num = 0;
    cout << "Please input a number: ";
    cin >> num;

    int parsing_num = num % 10;
    int accumulator = 0;

    while (num != 0)
    {
        if (parsing_num % 2 != 0)
        {
            accumulator += parsing_num; // adds all the odd numbers in the input
        }
//        cout << "The last digit of the number is: " << parsing_num << endl; // for debugging
        num = num / 10; // update "num" by truncating the last digit e.g. 123 / 10 = 12.3 = 12
        parsing_num = num % 10; // updates the condition for the while loop by getting the new last digit e.g. 12 % 10 = 2
    }
    cout << "The sum of all odd digits for the given number is: " << accumulator << endl;
    return 0; 
}