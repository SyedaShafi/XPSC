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
        char ch;
        cin >> n;
        cin >> ch;
        string s;
        cin >> s;
        int pos = -1;

        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ch)
                pos = i + 1;
            if (s[i] != ch)
                ok = false;
        }
        if (ok)
            cout << "0\n";

        else if (pos > n / 2)
            cout << 1 << "\n"
                 << pos << "\n";
        else
            cout << 2 << "\n"
                 << n - 1 << " " << n << "\n";
    }
}