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
        int n, s, r, sz;
        cin >> sz >> s >> r;
        int a[sz];
        a[0] = s - r;
        n = sz - 1;
        int i = 1;
        int rem = r - n;
        int tmp = rem / n;
        for (i = 1; i < sz; i++)
        {
            a[i] = tmp + 1;
        }
        if ((rem % n) != 0)
        {
            int res = (rem % n);
            for (int i = 1; i < sz; i++)
            {
                if (res == 0)
                    break;
                a[i]++;
                res--;
            }
        }
        for (int ele : a)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
}