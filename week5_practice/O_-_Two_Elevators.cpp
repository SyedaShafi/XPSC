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
        int a, b, c;
        cin >> a >> b >> c;
        int aa = a - 1;
        int bb = abs(b - c) + (c - 1);
        if (aa == bb)
            cout << 3 << "\n";
        else if (aa < bb)
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
    }
}