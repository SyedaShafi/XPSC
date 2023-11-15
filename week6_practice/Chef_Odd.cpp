#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n < 2 * k)
            cout << "NO\n";
        else if (n == (2 * k))
            cout << "YES\n";
        else
        {
            ll rem = (n + 1) / 2;
            rem = rem - k;
            if ((rem % 2) == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
