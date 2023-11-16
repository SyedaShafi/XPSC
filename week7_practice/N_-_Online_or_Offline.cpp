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
        int n, m;
        cin >> n >> m;
        double tmp = (n - (n * 0.1));
        if (tmp < m)
            cout << "ONLINE\n";
        else if (tmp > m)
            cout << "DINING\n";
        else
            cout << "EITHER\n";
    }
}