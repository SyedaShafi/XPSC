#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6 + 9;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> v;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= a[i]; j++)
            {
                while (a[i] % j == 0)
                {
                    a[i] /= j;
                    v[j]++;
                }
            }
            if (a[i] > 1)
                v[a[i]]++;
        }
        bool flag = true;
        for (auto ele : v)
        {
            // if (v[i] > 0 and i <= 100)
            //     cout << i << " " << v[i] << "\n";
            if (ele.second > 0 and (ele.second % n) != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}