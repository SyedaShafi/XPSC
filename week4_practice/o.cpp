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
            if (a[i] < 0)
            {
                sum += (a[i] * -1);
            }
            else
            {
                sum += a[i];
            }
        }

        int seg = 0, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0 and cnt > 0)
            {
                seg++;
                cnt = 0;
            }
            else if (a[i] < 0)
            {
                cnt++;
            }
        }
        if (cnt > 0)
            seg++;
        cout << sum << " " << seg << "\n";
    }
}