// count set bit

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        ans += n & 1;
        n = n >> 1;
    }
    cout << ans << "\n";
}