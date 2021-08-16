//We need to count the no of 5
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int trailingZeroes(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + n / i;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int ans = trailingZeroes(n);
    cout << ans;
    return 0;
}