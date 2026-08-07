#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

int count = 0;
srand(time(0));

while (count < 5)
{
	int num = rand();
	cout << "Random number: " << num << endl;
	count ++;
}
	return 0;
}
