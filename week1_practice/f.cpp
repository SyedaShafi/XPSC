#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    cin >> s;
    if (s.size() < 4)
    {
        for (int i = 0; i < 4 - s.size(); i++)
            cout << 0;
        cout << s << "\n";
    }
    else
        cout << s << "\n";
}