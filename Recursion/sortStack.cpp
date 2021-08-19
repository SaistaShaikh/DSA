#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int temp)
{
    if (s.size() == 0 || s.top() <= temp)
    {
        s.push(temp);
        return;
    }

    int val = s.top();
    s.pop();
    insert(s, temp);
    s.push(val);
}

void sortStack(stack<int> &s)
{
    if (s.size() == 1)
        return;
    int temp = s.top();
    s.pop();
    sortStack(s);
    insert(s, temp);
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

    sortStack(s);
    printStack(s);

    return 0;
}
