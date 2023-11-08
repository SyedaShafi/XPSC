#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int a, b;
    cin >> a >> b;
    ll sum = (a + b) + (a * b);
    if (sum == 111)
        cout << "Yes\n";
    else
        cout << "No\n";
}