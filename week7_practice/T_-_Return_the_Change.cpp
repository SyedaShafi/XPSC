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
        int tmp = (n % 10);
        if (tmp < 5)
            cout << 100 - (n - tmp) << "\n";
        else
            cout << 100 - (n + (10 - tmp)) << "\n";
    }
}