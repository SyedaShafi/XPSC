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
        if (n % 2 != 0)
            cout << "-1\n";
        else
        {
            for (int i = n; i > 0; i--)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
}