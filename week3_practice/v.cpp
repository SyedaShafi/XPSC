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
        ll n, k;
        cin >> n >> k;
        int ele, mx = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            k += ele;
            mx = max(ele, mx);
        }

        ll tmp = 0, i = 1;

        while (true)
        {
            tmp += i;
            if (tmp >= k)
                break;
            i++;
        }
        if (i < n || mx > i)
            cout << "NO\n";
        else if ((tmp - k) > 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}