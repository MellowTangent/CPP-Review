#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main ()
{
    cout << "This program will print any upper case letters found in a string of text." << endl;
    string user_input;
    cout << "Enter a string to parse: "; 
    getline(cin, user_input); // get input from cin and store it in user_input, default delimiter is newline

    int string_l = user_input.length(); // get the length of the string and store it in string_l
    char ch; // declare a char variable to hold each character in the string
    int i = 0; // initialize a counter variable to 0 
    while (i < string_l ) // while loop to iterate through the string
    {
        ch = user_input[i]; // access each character in the string using the counter variable i and store it in ch
        if (isupper(ch)) // check if the character is an uppercase letter isupper() is in <cctype> library
        {
            cout << ch << endl; // print each uppercase letter found in the string on a new line
        }

        i++; // increment counter to get to the next character

    }
    return 0;
}