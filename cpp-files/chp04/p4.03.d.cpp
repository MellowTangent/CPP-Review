#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main ()
{

    cout << "This progrma will give you the number of vowel in a string of text." << endl;
    string user_input; // declare a string variable to hold the user input
    cout << "Enter a string to parse: "; // prompt user for input
    getline(cin, user_input); // get input from cin and store it in user_input, default delimiter is newline

    int string_l = user_input.length(); // get the length of the string and store it in string_l
    char ch; // declare a char variable to hold each character in the string
    int i = 0; // initialize counter to 0 to iterate through the string
    int vowel_count = 0; // initialize a counter to keep track of the number of vowels
    
    while (i < string_l)
    {
        ch = user_input[i]; // access each character in the string using the counter variable i and store it in ch
        char lower_ch = tolower(ch); // convert the character to lowercase to check for vowels
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u')
        {
            vowel_count++; // increment the vowel counter if a vowel is found
        }
        i++; // increment the counter to move to the next character in the string
    }
    cout << "The number of vowels in the string is: " << vowel_count << endl; // print vowel count
    return 0;
}