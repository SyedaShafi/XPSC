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
        int n, m;
        cin >> n >> m;
        int diff = abs(n - m);
        if (diff % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}