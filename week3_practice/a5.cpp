#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll ans = 1;
        for (int i = 0; i < k; i++)
        {
            ans = ((ans * n) % N);
        }
        cout << ans << "\n";
    }
}