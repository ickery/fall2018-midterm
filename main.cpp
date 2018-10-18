/**
Description: Program that asks the user for a string and character to preform a count on the amount of characters in the string. D
Filename: main.cpp
Author: David Serrano
Date: 10/18/22
*/

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

// Checks whether two given chars are equivalent
// @Param1 char to be checked
// @Param2 char to be checked
bool is_char(char c, char is_char)
{
    if(tolower(c) == tolower(is_char)){ return true; }
    return false;
}

// Counts the amount of a character in a given string
// @Param1 string to be checked
// @Param2 character to search for
int char_count(string p1, char c)
{
    int count = 0;
    for(int i = 0; i < p1.size(); i++)
    {
         if( is_char(p1.at(i), c)){ count++;}
    }
    return count;
}


// Display a prompt followed by a request to input a string which is returned
// @Param prompt displayed before asking user for string
string get_string(string prompt)
{
    string input;
    cout << prompt;
    getline(cin, input);
    return input;
}


int main()
{ 
    string input = get_string("Please enter a string: ");
    char char_to_check;
    cout << "Now please enter a character to count: ";
    cin >> char_to_check;

    cout << "There are " <<  char_count(input, char_to_check) << " " << char_to_check << "'s in the string." <<  endl;
    return 0;
}
