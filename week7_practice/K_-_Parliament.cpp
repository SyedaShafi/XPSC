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
        int n, x;
        cin >> n >> x;
        if (((n + 1) / 2) <= x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}