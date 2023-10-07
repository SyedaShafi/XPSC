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
    {
        cin >> a[i];
    }
    ll presum[n + 2];
    presum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        presum[i + 1] = presum[i] + a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int i, j;
        cin >> i >> j;
        i++, j++;
        cout << presum[j] - presum[i - 1] << "\n";
    }
}