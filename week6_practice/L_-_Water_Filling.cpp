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
        int a, b, c;
        cin >> a >> b >> c;
        int tmp = a + b + c;
        if (tmp < 2)
            cout << "Water filling time\n";
        else
            cout << "Not now\n";
    }
}