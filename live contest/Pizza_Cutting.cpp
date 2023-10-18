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
        int n;
        cin >> n;
        if (n == 1)
            cout << "YES\n";
        else if (n % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}