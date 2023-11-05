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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        cout << b[0] - a[0] << " ";
        for (int i = 1; i < n; i++)
        {
            int tmp = max(b[i - 1], a[i]);
            cout << b[i] - tmp << " ";
        }
        cout << "\n";
    }
}