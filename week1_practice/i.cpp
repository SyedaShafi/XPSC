#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (((a * a) + (b * b)) < c * c)
        cout << "Yes\n";
    else
        cout << "No\n";
}