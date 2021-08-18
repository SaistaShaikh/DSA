//we reduce the iteration by checking for divisible by 2 and 3 , and looping from 5 till square root of number
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}