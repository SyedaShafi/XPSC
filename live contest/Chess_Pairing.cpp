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
        int n, x;
        cin >> n >> x;
        int u = (2 * n) - x;
        if (x - u >= 0)
            cout << x - u << "\n";
        else
            cout << "0\n";
    }
}