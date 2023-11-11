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
        string s;
        cin >> s;
        int tmp = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                tmp++;
        }

        int res = min(tmp, n - tmp);
        if (res % 2 == 0)
        {
            cout << "Ramos\n";
        }
        else
            cout << "Zlatan\n";
    }
}