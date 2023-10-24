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
        int n;
        cin >> n;
        ll digits = (log10(n));
        // cout << "digits " << digits << "\n";
        ll v = 1;
        while (digits--)
        {
            v *= 10;
        }
        // cout << v << " v \n";
        cout << n - v << "\n";
    }
}