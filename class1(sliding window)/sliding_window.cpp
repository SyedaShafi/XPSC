// subarray sum using sliding window in O(n) complexity

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;

    int i = 0, j = 0, s = 0;
    int mx = INT_MIN;

    while (j < n)
    {
        s += a[j];
        if (j >= k - 1)
        {
            mx = max(mx, s);
            s -= a[i];
            i++;
        }
        j++;
    }
    cout << mx << "\n";
}