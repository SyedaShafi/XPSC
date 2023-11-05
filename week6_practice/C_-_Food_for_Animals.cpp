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
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        x = x - a;
        y = y - b;
        bool flag = true;
        if (x > 0 and y > 0)
        {
            c = c - x;
            if (c < y)
            {
                flag = false;
            }
        }

        else if (x > 0 and c < x)
        {
            flag = false;
        }

        else if (y > 0 and c < y)
        {
            flag = false;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}