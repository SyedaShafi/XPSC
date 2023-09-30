#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int a, b, c, ans = -1;
    cin >> a >> b >> c;

    for (int i = a; i <= b; i++)
    {
        if (i >= c and i % c == 0)
        {

            ans = i;
            break;
        }
    }
    if (ans != -1)
        cout << ans << "\n";
    else
        cout << ans << "\n";
}