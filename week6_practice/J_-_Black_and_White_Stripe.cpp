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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                a[i] = 1;
            else
                a[i] = -1;
        }

        int i = 0, j = 0, l = 0, r = 0;
        int sum = 0, mx = INT_MIN;
        while (j < n)
        {
            sum += a[j];
            if (j + 1 >= k)
            {
                if (sum > mx)
                {
                    mx = sum;
                    l = i, r = j;
                }
                sum -= a[i];
                i++;
            }
            j++;
        }
        int cnt = 0;
        for (int m = l; m <= r; m++)
        {
            if (a[m] == -1)
                cnt++;
        }
        cout << cnt << "\n";
    }
}