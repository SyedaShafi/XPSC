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
        string s1;
        cin >> s1;
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        if (s1 == "yes")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}