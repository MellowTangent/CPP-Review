#include <iostream>
using namespace std;

int main () 
{
    int sum = 0;
    int n = 0;
    
    while (n < 50 )
    {
        n++;
        int x = 2*n;
        sum += x; 
    }
    cout << sum << endl;
    return 0;
}