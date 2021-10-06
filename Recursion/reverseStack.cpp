#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int t)
{
    if (s.size() == 0)
    {
        s.push(t);
        return;
    }
    int val = s.top();
    s.pop();
    solve(s, t);
    s.push(val);
}

void reverse(stack<int> &s)
{
    if (s.size() == 1)
        return;
    int t = s.top();
    s.pop();
    reverse(s);
    solve(s, t);
    return;
}

void printStack(stack<int> &s)
{
    if (s.empty())
        return;
    int x = s.top();

    s.pop();
    printStack(s);

    cout << x << " ";

    s.push(x);
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

    reverse(s);
    printStack(s);

    return 0;
}
