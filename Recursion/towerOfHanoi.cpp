#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long c = 0;
    long long toh(int N, int from, int to, int aux)
    {
        // Your code here
        c++;
        if (N == 1)
        {
            cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
            return c;
        }

        toh(N - 1, from, aux, to);
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;

        toh(N - 1, aux, to, from);

        return c;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        Solution ob;
        cout << ob.toh(n, 1, 3, 2) << endl;
    }
    return 0;
}