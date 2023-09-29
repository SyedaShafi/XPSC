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
        bool f = true;
        int cnt = 0;
        for (int i = 2; i < n; i++)
        {
            int s2 = (s[i - 1]) - '0';
            int s1 = (s[i - 2]) - '0';
            if ((s2 xor s1) == (s[i] - '0'))
            {
                cnt++;
            }
            else if ((s2 or s1) == (s[i] - '0'))
            {
                cnt++;
            }
            else if ((s2 and s1) == (s[i] - '0'))
            {
                cnt++;
            }
            else
            {
                f = false;
                break;
            }
        }
        cout << cnt << "\n";
    }
}