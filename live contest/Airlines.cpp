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
        int x, n;
        cin >> x >> n;
        int tmp = (n + 99) / 100;
        if (tmp > x)
            cout << tmp - x << "\n";
        else
            cout << 0 << "\n";
    }
}