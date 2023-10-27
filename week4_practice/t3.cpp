#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int no_of_set_bits(int num)
{
    int bits = 0;
    while (num > 0)
    {
        int bit = num & 1;
        num >>= 1;
        bits += bit;
    }
    return bits;
}
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[m + 1];
    for (int i = 0; i <= m; i++)
        cin >> a[i];
    int frd = 0;
    int tmp;
    for (int i = 0; i < m; i++)
    {
        tmp = a[i] ^ a[m];
        int set_bits = no_of_set_bits(tmp);
        if (set_bits <= k)
            frd++;
    }
    cout << frd << "\n";
}