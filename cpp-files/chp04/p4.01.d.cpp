#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
    double a = 0;
    double b = 0;
    
    cout << "Enter the first number: ";
    cin >> a;
    cout << endl;

    cout << "Enter the second number: ";
    cin >> b;
    cout << endl;
    
    do
    {
        double odd = 2*a + 1;
        cout << odd << endl;
        a++;
    }
    while (a < b);
    return 0;
}