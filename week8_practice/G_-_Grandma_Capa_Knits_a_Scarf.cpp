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
        int op = n + 1;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            int cnt = 0;
            int i = 0, j = n - 1;

            while (i <= j)
            {
                if (s[i] == s[j])
                {
                    i++, j--;
                }
                else if (s[i] == ch)
                {
                    cnt++, i++;
                }
                else if (s[j] == ch)
                {
                    cnt++, j--;
                }
                else
                {
                    cnt = n + 1;
                    break;
                }
            }

            op = min(op, cnt);
        }
        if (op == n + 1)
            cout << -1 << "\n";
        else
            cout << op << "\n";
    }
}