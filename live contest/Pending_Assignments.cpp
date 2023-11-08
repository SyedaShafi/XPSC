#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int tmp = z * 24 * 60;
        int total = x * y;
        if (total <= tmp)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}