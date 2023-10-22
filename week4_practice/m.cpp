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
        ll n, m, h, ele;
        cin >> n >> m >> h;
        vector<int> car, outlet;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            car.push_back(ele);
        }
        for (int j = 0; j < m; j++)
        {
            cin >> ele;
            outlet.push_back(ele);
        }

        sort(car.rbegin(), car.rend());
        sort(outlet.rbegin(), outlet.rend());

        ll ans = 0, j = 0, i = 0;

        while (i < m)
        {
            if (j >= n)
                break;
            ll tmp = h * outlet[i];
            if (tmp >= car[j])
            {
                ans += car[j];

            }
            else
            {
                ans += tmp; 
            }
            j++;
            i++;
        }
        cout << ans << "\n";
    }
}