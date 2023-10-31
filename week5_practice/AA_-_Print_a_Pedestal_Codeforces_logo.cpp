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
        int a = 2, b = 3, c = 1;
        int tmp = (n - 6) / 3;
        a += tmp;
        b += tmp;
        c += tmp;
        if ((n - 6) % 3 == 2)
        {
            b++, a++;
        }
        else if ((n - 6) % 3 == 1)
            b++;
        cout << a << " " << b << " " << c << "\n";
    }
}