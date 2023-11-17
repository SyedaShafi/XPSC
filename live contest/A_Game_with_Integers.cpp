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
        int rem = (n % 3);
        if (rem < (3 - rem))
        {
            if (rem == 1)
                cout << "First\n";
            else
                cout << "Second\n";
        }
        else if (rem > (3 - rem))
        {
            if (3 - rem == 1)
            {
                cout << "First\n";
            }
            else
                cout << "Second\n";
        }
        else
            cout << "Seond\n";
    }
}