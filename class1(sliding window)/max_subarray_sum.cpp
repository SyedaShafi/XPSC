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
    int k;
    cin >> k;

    int mx = INT_MIN;
    for (int i = 0; i < n - k + 1; i++)
    {
        int s = 0;
        for (int j = i; j < i + k; j++)
        {
            s += a[j];
        }
        mx = max(s, mx);
    }
    cout << mx << "\n";
}