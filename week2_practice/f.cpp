#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int k, s, cnt = 0;
    cin >> k >> s;
    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            int z = s - (x + y);
            if (z >= 0 and z <= k)
                cnt++;
        }
    }
    cout << cnt << "\n";
}