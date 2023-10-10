#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, p = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] == 0 and a[i - 1] == 1 and a[i + 1] == 1)
        {
            p++;
            i += 2;
        }
    }
    cout << p << "\n";
}