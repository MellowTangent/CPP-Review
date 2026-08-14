#include <iostream>
#include <string>
using namespace std;

int main ()
{

    cout << "This progrma will print every second character in a string of text." << endl;
    string user_input;
    cout << "Enter a string to parse: ";
    getline(cin, user_input);

    int string_l = user_input.length(); // get the length of the string and store it in string_l
    char ch; // declare a char variable to hold each character in the string
    int i = 0; // initialize counter to 1 to get every second character
    
    while (i < string_l)
    {
        ch = user_input[i];
        if (i % 2 != 0)
        {
            cout << ch << endl; // print every second character in the string on a new line
        }
        i++;
    }

    return 0;
}