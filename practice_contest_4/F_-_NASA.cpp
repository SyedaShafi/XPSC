#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
vector<int> palindrome;

void palindromes()
{
    string s1, s2;
    for (int i = 0; i < (1 << 15); i++)
    {
        s1 = to_string(i);
        s2 = s1;
        reverse(s2.begin(), s2.end());
        if (s1 == s2)
            palindrome.push_back(i);
    }
}
int main()
{
    int t;
    cin >> t;
    palindromes();
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindrome.size(); j++)
            {
                if (mp.find(a[i] ^ palindrome[j]) != mp.end())
                {
                    ans += mp[a[i] ^ palindrome[j]];
                }
            }
            mp[a[i]]--;
        }
        cout << ans << "\n";
    }
}