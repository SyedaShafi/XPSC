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
        int a[n], mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < mn)
            {
                mn = a[i];
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (a[i] - mn);
        }
        cout << sum << "\n";
    }
}