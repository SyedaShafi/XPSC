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
        ll n;
        cin >> n;
        if (n <= 1)
            cout << "-1\n";

        else if (n <= 1000000)
        {
            cout << 1 << " " << 1 << " " << n - 1 << "\n";
        }
        else
        {
            ll tmp1, tmp2;
            tmp1 = tmp2 = (int)sqrt(n);
            if ((n - (tmp1 * tmp2)) == 0)
            {
                tmp1--;
            }
            else if ((tmp1 * tmp2) > n)
            {
                tmp1--, tmp2--;
            }
            else
            {
                tmp1++;
                if ((tmp1 * tmp2) > n)
                    tmp1--;
            }
            ll c = n - (tmp1 * tmp2);

            cout << tmp1 << " " << tmp2 << " " << c << "\n";
        }
    }
}