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
        if (n % 2 == 0 and n % 7 == 0)
        {
            cout << "Alice\n";
        }
        else if (n % 2 != 0 and n % 9 == 0)
        {
            cout << "Bob\n";
        }
        else
            cout << "Charlie\n";
    }
}