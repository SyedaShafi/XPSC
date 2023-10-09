#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    while (true)
    {
        cnt++;
        if (n < k)
            break;
        n /= k;
    }
    cout << cnt << "\n";
}