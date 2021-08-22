#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool palindrome(string str)
{

    int i = 0;
    int j = str.length() - 1;
    while (i <= j)
    {
        if (str[i] != str[j])
            return false;
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{

    string str;
    getline(cin, str);
    cout << palindrome(str);

    return 0;
}