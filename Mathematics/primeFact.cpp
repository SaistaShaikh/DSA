//check for 2 and 3 explicitly and run loop till square root of n starting from 5 and check for i and i+2 to be prime and divisible by n

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;

    if (n == 2 || n == 3)
        return true;
    for (int i = 0; i * i <= n; i++)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

void primeFactor(int n)
{

    if (n <= 1)
        return;

    while (n % 2 == 0)
    {
        cout << "2"
             << " ";
        n = n / 2;
    }

    while (n % 3 == 0)
    {
        cout << "3"
             << " ";
        n = n / 3;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {

        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i + 2 << " ";
            n = n / (i + 2);
        }
    }
    if (n > 3)
        cout << n;
}

int main()
{

    int n;
    cin >> n;
    primeFactor(n);
    return 0;
}