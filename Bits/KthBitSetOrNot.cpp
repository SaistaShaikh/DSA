#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool setBitOrNot(int n, int k)
{
    return (n & (1 << (k - 1)));
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << setBitOrNot(n, k);
    return 0;
}