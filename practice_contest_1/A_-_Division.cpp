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
        if (n >= 1900)
            cout << "Division 1\n";
        else if (n >= 1600)
            cout << "Division 2\n";
        else if (n >= 1400)
            cout << "Division 3\n";
        else
            cout << "Division 4\n";
    }
}