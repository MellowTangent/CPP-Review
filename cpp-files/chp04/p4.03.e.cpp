#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main ()
{
    cout << "This progrma will give you the index of the vowels in a string" << endl;
    string user_input; // declare a string variable to hold the user input
    cout << "Enter a string to parse: "; // prompt user for input
    getline(cin, user_input); // get input from cin and store it in user_input, default delimiter is newline

    int string_l = user_input.length(); // get the length of the string and store it in string_l
    int i = 0; // initialize counter to 0 to iterate through the string

    
    while (i < string_l)
    {
        char ch = user_input[i]; // initialize a char variable to hold each character in the string
        char lower_ch = tolower(ch); // initialize a char variable to hold the lowercase version of "char ch" to check for vowels
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u')
        {
            cout << "The vowel " << ch << " is at index: " << i << endl; // print the vowel and its index in the string
        }
        i++; // increment the counter to move to the next character in the string
    }

    return 0;
}