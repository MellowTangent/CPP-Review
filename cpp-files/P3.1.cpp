//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string temp_scale;
//	cout << "Welcome to the state of liquid calculator." << endl;
//	cout << "This calculator will tell you if you have liquid water, ice, or water vapor!" << endl;
//	cout << endl;
//	cout << "Please indicate the temperature scale Fahrenheit or Celsius (F or C): ";
//	cin >> temp_scale;
//	cout << endl;
//
//	int temp;
//
//	if (temp_scale == "F" || temp_scale == "f")
//	{
//		cout << "You have selected Fahrenheit!" << endl;
//		cout << "Please input your temperature reading: ";
//		cin >> temp;
//		cout << endl;
//
//		if (temp >= 212)
//		{
//			cout << "You have water vapor!" << endl;
//		}
//		else if (temp <= 32)
//		{
//			cout << "You have ice!" << endl;
//		}
//		else 
//		{
//			cout << "You have liquid water!" << endl;
//		}
//	}
//	else if (temp_scale == "C" || temp_scale == "c")
//	{
//		cout << "You have selected Celsius!" << endl;
//		cout << "Please input your temperature reading: ";
//		cin >> temp;
//		cout << endl;
//
//		if (temp >= 100)
//		{
//			cout << "You have water vapor!" << endl;
//		}
//		else if (temp <= 0)
//		{
//			cout << "You have ice!" << endl;
//		}
//		else
//		{
//			cout << "You have liquid water!" << endl;
//		}
//
//	}
//	else
//	{
//		cout << "Invalid Input." << endl;
//		return 1;
//	}
//
//	return 0;
//}
