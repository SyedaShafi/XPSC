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
        string s, tmp = "", res = "meow";

        cin >> s;
        for (char &c : s)
        {
            c = tolower(c);
        }
       
        tmp += s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] != s[i])
                tmp += s[i];
        }
        if (res == tmp)
            cout << "YES\n";
        else
            cout << "No\n";
    }
}