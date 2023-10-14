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
        string s;
        cin >> n >> s;
        int tmp = 1;
        if (n == 1)
        {
            if (n % 8 == 0)
                cout << n << "\n";
            else
                cout << 8 << "\n";
        }
        else if (n == 2)
        {
            int num = 0;
            num += (s[n - 2] - '0') * 10;
            num += (s[n - 1] - '0');
            if (num % 8 == 0)
                cout << num << "\n";
            else
            {
                num /= 10;
                num *= 10;
                for (int i = 0; i <= 8; i++)
                {
                    if ((num + i) % 8 == 0)
                    {
                        num = num + i;
                        break;
                    }
                }
                if (num < 10)
                    cout << 0 << num << "\n";
                else
                    cout << num << "\n";
            }
        }
        else
        {
            int num = 0;
            num += ((s[n - 3] - '0') * 10);
            num += (s[n - 2] - '0');
            num *= 10;
            num += (s[n - 1] - '0');
            // cout << num << " num\n";
            if (num % 8 == 0)
            {
                num = num;
            }
            else
            {
                num /= 10;
                num *= 10;
                // cout << num << " num\n";
                for (int i = 0; i <= 8; i++)
                {
                    if ((num + i) % 8 == 0)
                    {
                        num = num + i;
                        break;
                    }
                }
            }
            int i = n - 1;
            int kk = num;
            while (num != 0)
            {
                int res = num % 10;
                s[i] = (res + '0');
                num /= 10;
                i--;
            }
            if (kk < 100)
            {
                s[i] = '0';
            }
            cout << s << "\n";
        }
    }
}