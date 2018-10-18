/**
Description: 
Filename: main.cpp
Author:
Date: 
*/

#include <iostream>
#include <string>

using namespace std;

int char_count(string p1, char c)
{
    int count = 0;
    for(int i = 0; i < p1.size(); i++)
    {
    if(p1.at(i) == c){ count++;}
    }
    return count;
}


string get_string(string prompt)
{
    string input;
    cout << prompt;
    cin >> input;
    return input;
}

int main()
{ 
    string input = get_string("Please enter a string: ");
    char char_to_check;
    cout << "Now please enter a character to count: ";
    cin >> char_to_check;

    cout<< char_count(input, char_to_check);
    return 0;
}
