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
        cin >> a[i];

    int cnt[1000 + 7] = {0};

    for (int i = 2; i <= 1000; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] % i == 0)
                cnt[i]++;
        }
    }
    int ans = -1, mx = INT_MIN;
    for (int i = 0; i <= 1000; i++)
    {
        if (cnt[i] > mx)
        {
            mx = cnt[i];
            ans = i;
        }
    }
    cout << ans << "\n";
}