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
        string s, ans = "";
        cin >> s;
        int n = s.size();
        int first = s[0];
        int last = s[n - 1];
        int len = 0;
        if (first < last)
        {
            for (int i = first; i <= last; i++)
            {
                for (int j = 0; j < s.size(); j++)
                {
                    if (i == s[j])
                    {
                        ans += to_string(j + 1) + " ";
                        len++;
                    }
                }
            }
        }
        else
        {
            for (int i = first; i >= last; i--)
            {
                for (int j = 0; j < s.size(); j++)
                {
                    if (i == s[j])
                    {
                        ans += to_string(j + 1) + " ";
                        len++;
                    }
                }
            }
        }
        cout << abs(first - last) << " " << len << "\n";
        cout << ans;
        cout << "\n";
    }
}