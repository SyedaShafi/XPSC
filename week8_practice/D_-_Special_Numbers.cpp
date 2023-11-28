#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll sum = 0, j = 1;
        while (k > 0)
        {
            if (k % 2 == 1)
            {
                sum = (sum + j) % N;
            }
            j = (j * n) % N;
            k /= 2;
        }
        cout << sum << "\n";
    }
}