#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int ele;
    int ans = INT_MAX;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            int dif = abs(a[i] - a[j]);
            if (dif % 2 != 0)
                cnt++;
        }
        ans = min(ans, cnt);
    }
    cout << ans << "\n";
}