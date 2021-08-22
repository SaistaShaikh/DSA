// Q1. Fanny's Occurences

// Fanny is given a string along with the string which contains single character x. She has to remove the character x from the given string.
//Help her write a function to remove all occurrences of x character from the given string.

// Input Specification:

// input1: input string s

// input2: String containing any character x

// Output Specification:

// String without the occurrence of character x

// Example 1:

// input1: welcome to mettl

// input2: l

// Output: wecome to mett

// Explanation: As I is the character which is required to be removed, therefore all the occurrences of I are removed, keeping all other characters.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void removeChar(string str, char c)
{

    string s = "";
    
    for (int i = 0; i < str.length(); i++)
    {
       char c = str[i];
       if(ch == c) continue;
       else s = s+c;
    }

    cout << s;
}

int main()
{

    string str;

    str = "mettll";
    removeChar(str, 'l');

    return 0;
}