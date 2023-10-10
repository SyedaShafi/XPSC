#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, k;
    cin >> n >> k;
    while (k--)
    {
        if (n % 10 != 0)
            n--;
        else
            n /= 10;
    }
    cout << n << "\n";
}