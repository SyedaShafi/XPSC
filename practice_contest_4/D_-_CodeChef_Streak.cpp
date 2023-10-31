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
        int addy = 0, om = 0, mx1 = 0, mx2 = 0;
        int ele;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            if (ele == 0)
            {
                mx1 = max(mx1, om);
                om = 0;
            }
            else
                om++;
        }
        mx1 = max(om, mx1);
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            if (ele == 0)
            {
                mx2 = max(mx2, addy);
                addy = 0;
            }
            else
                addy++;
        }
        mx2 = max(mx2, addy);
        // cout << mx1 << " " << mx2 << "\n";
        if (mx1 > mx2)
            cout << "Om\n";
        else if (mx1 < mx2)
            cout << "Addy\n";
        else
            cout << "Draw\n";
    }
}