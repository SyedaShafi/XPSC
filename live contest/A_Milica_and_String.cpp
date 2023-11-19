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
        int f = -1, l = -1;
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                b++;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                f = i + 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                l = i + 1;
                break;
            }
        }

        if (k == b)
        {
            cout << "0\n";
        }
        else if (l == -1)
        {
            cout << "1\n";
            cout << k << " B\n";
        }
        else if (l <= k)
        {
            cout << "1\n";
            cout << k << " B\n";
        }
        else if (b < k)
        {
            int dif = k - b;
            if (f >= dif)
            {
                cout << "1\n";
                cout << dif << " B\n";
            }
            else
            {
                cout << "2\n";
                cout << n << " A\n";
                cout << k << " B\n";
            }
        }
        else
        {
            int dif = b - k;
            int tmp = 0, idx;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'B')
                {
                    tmp++;
                }
                if (tmp == dif)
                {
                    idx = i + 1;
                    break;
                }
            }
            cout << "1\n";
            cout << idx << " A\n";
        }
    }
}