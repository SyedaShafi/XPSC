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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        int ans = n, cnt = 0, len, flag = 1;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            len = i + 1;
            cnt = 0;
            ll tmp = 0;
            flag = 1;
            for (int j = i + 1; j < n; j++)
            {
                tmp += a[j];
                cnt++;
                if (sum == tmp)
                {
                    len = max(len, cnt);
                    tmp = 0;
                    cnt = 0;
                }
                if (tmp > sum)
                {
                    break;
                }
            }
            if (tmp > 0 and tmp != sum)
                flag = 0;
            if (flag == 1)
                ans = min(ans, len);
        }

        cout << ans << "\n";
    }
}