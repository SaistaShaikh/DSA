//TC --> logn  SC-->1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long pow(int a, int b)
{

    long long ans = 1;
    while (b > 0)
    {
        if (b % 2 != 0) //binary bit present at this position is 1
        {
            ans = ans * a;
        }
        a = a * a;
        b = b / 2;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    long long ans = pow(a, b);
    cout << ans;

    return 0;
}