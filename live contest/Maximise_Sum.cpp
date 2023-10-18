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
        int a[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll tmp = sum, ans = 0, cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int j = i + 1;
            if (a[i] > a[j])
            {
                while (a[i] > a[j] and j < n)
                {
                    // cout << tmp << " " << j << " tmp and j \n";
                    cnt++;
                    tmp -= a[j];
                    j++;
                }
                tmp += (cnt * a[i]);
                i = j - 1;
                ans = max(sum, tmp);
                tmp = ans;
                cnt = 0;
            }
        }
        cout << max(sum, ans) << "\n";
    }
}