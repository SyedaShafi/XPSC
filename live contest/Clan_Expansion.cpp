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
        int f[n + 3] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f[a[i]]++;
        }

        int first = INT_MIN;
        int tmp = 0;

        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[0])
            {
                first = max(first, (abs(i - tmp) / 2));
                tmp = i;
            }
        }
        first = max(first, (n - tmp - 1));
        int last = INT_MIN;
        tmp = n - 1;

        for (int i = n - 2; i > 0; i--)
        {
            if (a[i] == a[n - 1])
            {
                last = max(last, ((abs(tmp - i)) / 2));
                tmp = i;
            }
        }

        last = max(last, abs(tmp));
        int mx_f = -1;
        int init = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (f[a[i]] > init and (a[i] != a[0]) and (a[i] != a[n - 1]))
            {
                mx_f = a[i];
                init = f[a[i]];
            }
        }
        int mx_f_days = INT_MIN;
        int idx_f = -1;
        if (mx_f != -1)
        {
            for (int i = 1; i <= n - 1; i++)
            {
                if (a[i] == mx_f)
                {
                    idx_f = i;
                    break;
                }
            }
            tmp = idx_f;
            for (int i = tmp + 1; i < n - 1; i++)
            {
                if (a[i] == mx_f)
                {
                    mx_f_days = max(mx_f_days, ((abs(tmp - i)) / 2));
                    tmp = i;
                }
            }
        }
        mx_f_days = max(mx_f_days, idx_f);
        mx_f_days = max(mx_f_days, n - tmp - 1);

        cout << first << " " << last << " " << mx_f_days << "\n";
        if (last <= first and last <= mx_f_days)
        {
            cout << a[n - 1] << " " << last << "\n";
        }
        else if (first <= last and first <= mx_f_days)
        {
            cout << a[0] << " " << first << "\n";
        }
        else
        {
            cout << mx_f << " " << mx_f_days << "\n";
        }
    }
}