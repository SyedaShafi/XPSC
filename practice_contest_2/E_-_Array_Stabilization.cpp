#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = INT_MAX;
    ans = min(ans, a[n - 2] - a[0]);
    ans = min(ans, a[n - 1] - a[1]);
    cout << ans << "\n";
}