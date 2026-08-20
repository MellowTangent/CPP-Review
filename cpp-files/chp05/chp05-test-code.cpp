#include <iostream>
#include <cmath>
using namespace std;


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