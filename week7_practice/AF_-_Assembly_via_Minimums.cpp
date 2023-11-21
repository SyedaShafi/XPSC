#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e9;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = (n * (n - 1)) / 2;
        int a[m];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(a, a + m);
        for (int i = 0; i < m; i += --n)
        {
            cout << a[i] << " ";
        }
        cout << N;
        cout << "\n";
    }
}