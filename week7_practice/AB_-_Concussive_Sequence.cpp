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
            cin >> a[i];
        vector<int> v1, v2;
        sort(a, a + n);
        int l = 0, r = (n + 1) / 2;
        while (l < (n + 1) / 2)
        {
            v1.push_back(a[l]);
            l++;
            if (r < n)
                v1.push_back(a[r]);
            r++;
        }

        l = 0, r = (n + 1) / 2;
        while (l < (n + 1) / 2)
        {
            if (r < n)
                v2.push_back(a[r]);
            r++;
            v2.push_back(a[l]);
            l++;
        }

        bool flag1 = true, flag2 = true;
        for (int i = 1; i < n - 1; i++)
        {
            if (!(v1[i] > v1[i - 1] and v1[i] > v1[i + 1]) and !(v1[i] < v1[i - 1] and v1[i] < v1[i + 1]))
            {
                flag1 = false;
                break;
            }
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (!(v2[i] > v2[i - 1] and v2[i] > v2[i + 1]) and !(v2[i] < v2[i - 1] and v2[i] < v2[i + 1]))
            {
                flag2 = false;
                break;
            }
        }

        if (flag1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v1[i] << " ";
            }
            cout << "\n";
        }
        else if (flag2)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v2[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}