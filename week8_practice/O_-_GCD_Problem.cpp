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
        n--;

        int a = 2, b = n - 2;
        while (__gcd(a, b) != 1)
        {
            b--, a++;
        }
        cout << a << " " << b << " 1\n";
    }
}