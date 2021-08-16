//all the divisor comes in pair like 15 --> 1*15 3*5  first loop is for all the small nos which is less then root n and other for big nos that is greater then root n
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void allFactors(int n)
{
    int i;
    // all divisors from 1 to square root of n
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }

    //all divisors from sqaure roo of n till n
    for (; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << n / i << " ";
        }
    }
}

int main()
{

    int n;
    cin >> n;
    allFactors(n);

    return 0;
}