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
        ll freq[n + 5] = {0};
        int ele;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            freq[ele]++;
        }
        int ans = -1;
        for (int i = 0; i <= n; i++)
        {
            if (freq[i] >= 3)
            {
                ans = i;
                break;
            }
        }
        cout << ans << "\n";
    }
}