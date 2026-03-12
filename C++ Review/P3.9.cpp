//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	string grade;
//	double final_grade = 0.0;
//	cout << "Welcome to the numeric grade calculator!" << endl << endl;
//	cout << "Please enter your letter grade (A-F) followed by a modifier (+/-). \nExample: B+" << endl << endl;
//	cout << "Example: C <-- This is also a valid input!" << endl << endl;
//	cout << "Now your turn! \nGrade: ";
//	cin >> grade;
//	cout << endl;
//
//	string grade_letter = grade.substr(0,1);
//	int grade_length = grade.length();
//
//	double grade_A = 4.0;
//	double grade_B = 3.0;
//	double grade_C = 2.0;
//	double grade_D = 1.0;
//	double grade_F = 0.0;
//	double modifier = 0.3;
//
//
//	if (grade_length == 1)
//	{
//		if (grade_letter == "A")
//		{
//			final_grade = grade_A;
//		}
//		else if (grade_letter == "B")
//		{
//			final_grade = grade_B;
//		}
//		else if (grade_letter == "C")
//		{
//			final_grade = grade_C;
//		}
//		else if (grade_letter == "D")
//		{
//			final_grade = grade_D;
//		}
//		else
//		{
//			final_grade = grade_F;
//		}
//	}
//	if (grade_length == 2)
//	{
//		string grade_mod = grade.substr(1, 1);
//
//		if (grade_letter == "A" && grade_mod == "+")
//		{
//			final_grade = grade_A;
//		}
//		else if (grade_letter == "A" && grade_mod == "-")
//		{
//			final_grade = grade_A - modifier;
//		}
//		else if (grade_letter == "B" && grade_mod == "+")
//		{
//			final_grade = grade_B + modifier;
//		}
//		else if (grade_letter == "B" && grade_mod == "-")
//		{
//			final_grade = grade_B - modifier;
//		}
//		else if (grade_letter == "C" && grade_mod == "+")
//		{
//			final_grade = grade_C + modifier;
//		}
//		else if (grade_letter == "C" && grade_mod == "-")
//		{
//			final_grade = grade_C - modifier;
//		}
//		else if (grade_letter == "D" && grade_mod == "+")
//		{
//			final_grade = grade_D + modifier;
//		}
//		else if (grade_letter == "D" && grade_mod == "-")
//		{
//			final_grade = grade_D - modifier;
//		}
//		else
//		{
//			final_grade = grade_F;
//		}
//	}
//	cout << fixed << setprecision(1) << "Your grade is " << final_grade << endl;
//
//	return 0;
//}