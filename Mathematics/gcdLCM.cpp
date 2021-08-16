//gcd using euclid's algo and lcm using the formula a*b=gcd(a,b)*lcm(a,b)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    long long g = gcd(a, b);
    return (a * b) / g;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    vector<long long> ans;
    long long g = gcd(a, b);
    ans.push_back(g);
    long long l = lcm(a, b);
    ans.push_back(l);
    cout << ans[0] << " " << ans[1];
    return 0;
}