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
        if (n <= 15)
        {
            cout << "Lower ";
            if (n <= 10)
                cout << "Double\n";
            else
                cout << "Single\n";
        }
        else
        {
            cout << "Upper ";
            if (n <= 25)
                cout << "Double\n";
            else
                cout << "Single\n";
        }
    }
}