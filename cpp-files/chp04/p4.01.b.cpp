#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
    int sum = 0;
    int n = 0;
    
    while (n < 100 )
    {
        n++;
        sum += pow(n,2);
    }
    cout << sum << endl;
    return 0;
}