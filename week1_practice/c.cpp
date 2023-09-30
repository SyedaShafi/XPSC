#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
        cout << abs(a - b) + 1;
    else
        cout << 0 << "\n";
}