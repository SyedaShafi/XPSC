#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int t1 = a, t2 = b;
        if (a % b == 0)
            cout << 0 << "\n";
        else
        {
            int tmp = a + b - 1;
            a = tmp, b = 1;
            int op = INT_MAX;
            while (a > 0)
            {
                if (a % b == 0)
                {
                    op = min(op, (abs(t2 - b)));
                }
                a--, b++;
            }
            cout << op << "\n";
        }
    }
}