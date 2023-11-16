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
        int total = m * 6 * 6;
        if (total >= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}