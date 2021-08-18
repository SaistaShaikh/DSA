#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countSetBit(int n)
{
    int c = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        c++;
    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    cout << countSetBit(n);
    return 0;
}