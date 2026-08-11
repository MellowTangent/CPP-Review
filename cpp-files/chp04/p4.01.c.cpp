#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
    int power = 0;
    int n = 0;
    
    while (n < 20 )
    {
        n++;
        power = pow(2,n);
        cout << power << endl;
    }
    return 0;
}