//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	double checking_balance = 0;
//	double saving_balance = 0;
//
//	cout << fixed << setprecision(2);
//	cout << "Welcome to CHASE Online Banking app!" << endl << endl;
//	cout << "Please enter your checking balance: $";
//	cin >> checking_balance;
//	cout << endl;
//	cout << "Please enter your savings balance: $";
//	cin >> saving_balance;
//	cout << endl;
//	if (checking_balance < 0 || saving_balance < 0)
//	{
//		cout << "Negative balance is not a valid input. Please try again!" << endl;
//
//		return 0;
//	}
//	cout << "How would you like to proceed?" << endl;
//
//	int selected_option;
//	cout << "1) Deposit" << endl;
//	cout << "2) Withdraw" << endl;
//	cout << "3) Transfer" << endl;
//	cout << "Please select one of the following options (use numbers: 1-3): ";
//	cin >> selected_option;
//	cout << endl;
//
//	int account_option;
//	cout << "4) Checking" << endl;
//	cout << "5) Savings" << endl;
//	cout << "Please select one of the following options (use numbers: 4-5): ";
//	cin >> account_option;
//	cout << endl;
//
//
//	double deposit = 0;
//	double withdraw = 0;
//	double transfer = 0;
//	double checking_total = 0;
//	double saving_total = 0;
//
//	if (selected_option == 1 && account_option == 4)
//	{
//		cout << "How much would you like to deposit to your Checking account?" << endl;
//		cout << "Deposit amount: $";
//		cin >> deposit;
//		cout << endl;
//
//		checking_total = checking_balance + deposit;
//		saving_total = saving_balance;
//	}
//	else if (selected_option == 1 && account_option == 5)
//	{
//		cout << "How much would you like to deposit to your Savings account?" << endl;
//		cout << "Deposit amount: $";
//		cin >> deposit;
//		cout << endl;
//
//		saving_total = saving_balance + deposit;
//		checking_total = checking_balance;
//	}
//	if (selected_option == 2 && account_option == 4)
//	{
//		cout << "How much would you like to withdraw from your Checking account?" << endl;
//		cout << "Withdraw amount: $";
//		cin >> withdraw;
//		cout << endl;
//
//		checking_total = checking_balance - withdraw;
//		saving_total = saving_balance;
//
//		if (checking_total < 0)
//		{
//			cout << "Sorry unable to withdraw that amount!" << endl;
//			return 0;
//		}
//	}
//	else if (selected_option == 2 && account_option == 5)
//	{
//		cout << "How much would you like to withdraw from your Savings account?" << endl;
//		cout << "Withdraw amount: $";
//		cin >> withdraw;
//		cout << endl;
//
//		saving_total = saving_balance - withdraw;
//		checking_total = checking_balance;
//
//		if (saving_total < 0)
//		{
//			cout << "Sorry unable to withdraw that amount!" << endl;
//			return 0;
//		}
//	}
//	if (selected_option == 3 && account_option == 4)
//	{
//		cout << "How much would you like to transfer from your Checking account to your Savings account?" << endl;
//		cout << "Transfer amount: $";
//		cin >> transfer;
//		cout << endl;
//
//		checking_total = checking_balance - transfer;
//		saving_total = saving_balance + transfer;
//
//		if (checking_total < 0)
//		{
//			cout << "Sorry unable to transfer that amount!" << endl;
//			return 0;
//		}
//	}
//	else if (selected_option == 3 && account_option == 5)
//	{
//		cout << "How much would you like to transfer from your Savings account to your Checking account?" << endl;
//		cout << "Transfer amount: $";
//		cin >> transfer;
//		cout << endl;
//
//		saving_total = saving_balance - transfer;
//		checking_total = checking_balance + transfer;
//
//		if (saving_total < 0)
//		{
//			cout << "Sorry unable to transfer that amount!" << endl;
//			return 0;
//		}
//	}
//
//	cout << "Your current account balances are: " << endl;
//	cout << "Checking: " << checking_total << endl;
//	cout << "Savings: " << saving_total << endl << endl;
//	cout << "Thank you for choosing to bank with CHASE, have a nice day!" << endl;
//
//	return 0;
//}