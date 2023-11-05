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

        int cnt = 0;
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i - 1] >= a[i])
            {
                if (a[i] == 0)
                {
                    cnt = -1;
                    break;
                }
                while (a[i - 1] >= a[i])
                {
                    a[i - 1] /= 2;
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
}