#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int a, b;
    cin >> a >> b;
    int mx = max(a, b);
    int ans1 = mx + mx - 1;
    int ans2 = a + b;
    cout << max(ans1, ans2);
}