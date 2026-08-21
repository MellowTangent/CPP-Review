#include <iostream>
using namespace std;

/**
 * Computes the sum of two numbers
 * @param num1 this is the first number used in the sum
 * @param num2 this is the second number used in the sum
 * @return the sum
 */

double sum(double num1, double num2)
{
    double total = num1 + num2;
    return total;
}
int main ()
{
    double number1 = 0;
    double number2 = 0;
    cout << "This program will add two numbers." << endl;
    cout << "Please enter the first number: ";
    cin >> number1;
    cout << endl;
    cout << "Please enter the second number: ";
    cin >> number2;
    cout << endl;
    cout << "The sum is: " << sum(number1,number2) << endl;
    return 0;
}
