#include <iostream>
using namespace std;

int main()
{
	int year = 0;
	double balance = 1000;
	const double target = 3000;
	const double rate = 5;
	

	while (balance < target )
	{
		year++;
		double interest = balance * rate / 100;
		balance = balance + interest;
	}
	cout << "Balance: $" << balance << endl;
	cout << "The investment tripled after " << year << " years" << endl;

	return 0;
}/