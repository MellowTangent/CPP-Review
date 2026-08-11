#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

int count = 0;
srand(time(0)); // seed the random number generator with the current time

while (count < 5) // loop until 5 random numbers have been generated
{
	int num = rand(); // generate a random number
	cout << "Random number: " << num << endl; // print the random number
	count ++; // increment the count
}
	return 0;
}
