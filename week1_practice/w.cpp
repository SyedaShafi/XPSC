#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    ll x, y;
    cin >> x >> y;
    ll tmp = x;
    ll cnt = 0;
    while (tmp <= y)
    {
        cnt++;
        tmp = tmp * 2;
    }
    cout << cnt << "\n";
}