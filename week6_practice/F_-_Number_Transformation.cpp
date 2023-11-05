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
        int x, y;
        cin >> x >> y;
        if (x > y)
            cout << "0 0\n";
        else
        {
            if (y % x == 0)
            {
                cout << 1 << " " << y / x << "\n";
            }
            else
            {
                cout << "0 0\n";
            }
        }
    }
}