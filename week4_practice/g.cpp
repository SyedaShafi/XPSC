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
        int n, q;
        cin >> n >> q;
        int odd = 0, even = 0, ele;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            sum += ele;
            if (ele % 2 == 0)
                even++;
            else
                odd++;
        }
        while (q--)
        {
            int type, xi;
            cin >> type >> xi;
            if (type == 0)
            {
                sum += (even * xi);
                if (xi % 2 != 0)
                {
                    odd += even;
                    even = 0;
                }
            }
            else
            {
                sum += (odd * xi);
                if (xi % 2 != 0)
                {
                    even += odd;
                    odd = 0;
                }
            }
            cout << sum << "\n";
        }
    }
}