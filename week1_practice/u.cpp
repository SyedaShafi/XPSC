#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int a[n];
    n--;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            ans = i + 1;
            break;
        }
    }
    if (ans == -1)
        cout << n + 1;
    else
        cout << ans;
}