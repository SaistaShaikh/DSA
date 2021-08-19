#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sum(int n, int ans)
{

    if (n == 0)
        return ans;
    sum(n - 1, ans + n);
}

int main()
{
    int n;
    cin>>n;
    cout << sime(n, 0);
    return 0;
}