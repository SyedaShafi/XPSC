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
        {
            cin >> a[i];
        }
        bool f = true;
        int even = 0, odd = 0;
        if (a[0] % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0 and a[i] % 2 != 0)
                {
                    f = false;
                    break;
                }
                else if (i % 2 != 0 and a[i] % 2 == 0)
                {
                    f = false;
                    break;
                }
            }
        }
        else if (a[0] % 2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0 and a[i] % 2 == 0)
                {
                    f = false;
                    break;
                }
                else if (i % 2 != 0 and a[i] % 2 != 0)
                {
                    f = false;
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even++;
            else

                odd++;
        }

        if (even == n || odd == n)
            cout << "YES\n";
        else if (f == false)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}