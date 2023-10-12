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
        int x, y;
        cin >> x >> y;
        if (x / y > 20)
            cout << "20\n";
        else
            cout << x / y << "\n";
    }
}