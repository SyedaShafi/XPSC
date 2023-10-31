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
        int tmp = n * x;
        // cout << tmp << "\n";
        int digits = log10(tmp) + 1;
        // cout << digits << "\n";
        if (digits == 5)
            cout << "YES\n";
        else
            cout << "NO\n";
        }
}