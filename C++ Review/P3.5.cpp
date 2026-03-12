//#include <iostream>
//using namespace std;
//
//int main()
//{
//	long long x;
//	cout << "Welcome to digit counter!" << endl;
//	cout << "Please input a number (max 10 billion): ";
//	cin >> x;
//	cout << endl;
//
//	if (x <= 0)
//	{
//		x = x * (-1);
//	}
//	if (x >= 1000000000)
//	{
//		cout << "The number has 10 digits." << endl;
//	}
//	else if (x >= 100000000)
//	{
//		cout << "The number has 9 digits." << endl;
//	}
//	else if (x >= 10000000)
//	{
//		cout << "The number has 8 digits." << endl;
//	}
//	else if (x >= 1000000)
//	{
//		cout << "The number has 7 digits." << endl;
//	}
//	else if (x >= 100000)
//	{
//		cout << "The number has 6 digits." << endl;
//	}
//	else if (x >= 10000)
//	{
//		cout << "The number has 5 digits." << endl;
//	}
//	else if (x >= 1000)
//	{
//		cout << "The number has 4 digits." << endl;
//	}
//	else if (x >= 100)
//	{
//		cout << "The number has 3 digits." << endl;
//	}
//	else if (x >= 10)
//	{
//		cout << "The number has 2 digits." << endl;
//	}
//	else
//	{
//		cout << "The number has 1 digits." << endl;
//	}
//
//	return 0;
//}