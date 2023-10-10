#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int k;
    cin >> k;
    ll sum = 0;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            for (int c = 1; c <= k; c++)
            {
                sum += __gcd(i, __gcd(j, c));
            }
        }
    }
    cout << sum << "\n";
}