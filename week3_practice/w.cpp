#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;
        int op = -1;
        if (a == b)
        {
            op = 0;
        }
        else if (abs(a - b) >= x)
        {
            op = 1;
        }
        else if (r - a >= x and r - b >= x)
        {
            op = 2;
        }
        else if (a - l >= x and b - l >= x)
        {
            op = 2;
        }
        else if (a - l >= x and r - l >= x and r - b >= x)
        {
            op = 3;
        }
        else if (r - a >= x and r - l >= x and b - l >= x)
        {
            op = 3;
        }
        cout << op << "\n";
    }
}