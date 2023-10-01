#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int i = 2, tmp = a;
    int ans = 0;
    while (tmp <= t)
    {
        ans += b;
        tmp = a * i;
        i++;
    }
    cout << ans << "\n";
}