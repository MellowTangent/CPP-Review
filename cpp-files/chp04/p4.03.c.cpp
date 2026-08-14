#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main ()
{

    cout << "This progrma will replace every vowel char with an underscore" << endl;
    string user_input; // declare a string variable to hold the user input
    cout << "Enter a string to parse: "; // prompt user for input
    getline(cin, user_input); // get input from cin and store it in user_input, default delimiter is newline

    int string_l = user_input.length(); // get the length of the string and store it in string_l
    char ch; // declare a char variable to hold each character in the string
    int i = 0; // initialize counter to 0 to iterate through the string
    
    while (i < string_l)
    {
        ch = user_input[i]; // access each character in the string using the counter variable i and store it in ch
        char lower_ch = tolower(ch); // convert the character to lowercase to check for vowels
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u')
        {
            ch = '_'; // replace the vowel with an underscore
        }
        i++;
        cout << ch; // print the characters to the console with the vowels replaced by underscores
    }

    return 0;
}