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
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < n; j++)
            cin >> b[j];

        bool flag = true;
        int dif = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != 0)
                dif = min(dif, a[i] - b[i]);
        }
        if (dif < 0)
        {
            flag = false;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] - b[i] < 0)
                {
                    flag = false;
                    break;
                }
                if (dif < (a[i] - b[i]))
                {
                    flag = false;
                    break;
                }
                if (dif > (a[i] - b[i]) and b[i] != 0)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}