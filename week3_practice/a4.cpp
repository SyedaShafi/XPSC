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
        int num_of_bits = log2(n);
        int res = 1 << num_of_bits;
        cout << res - 1 << "\n";
    }
}