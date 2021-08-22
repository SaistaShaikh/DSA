#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int k)
{
    if (k == 1)
    {
        s.pop();
        return;
    }

    int temp = s.top();
    s.pop();
    solve(s, k - 1);
    s.push(temp);
    return;
}

void dltMiddle(stack<int> &s)
{

    if (s.size() == 0)
        return;

    int k = s.size() / 2 + 1;
    solve(s, k);
    return;
}

void PrintStack(stack<int> s)
{

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{

    int n;
    cin >> n;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.push(a);
    }
    dltMiddle(s);
    PrintStack(s);
    return 0;
}