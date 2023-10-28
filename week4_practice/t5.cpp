#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
vector<int> palindromes;
void generate_palindrome()
{
    int mx = 1 << 15;
    for (int i = 0; i < mx; i++)
    {
        string str = to_string(i);
        string rev = str;
        reverse(rev.begin(), rev.end());
        if (str == rev)
        {
            palindromes.push_back(i);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    generate_palindrome();
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        unordered_map<int, int> freq;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindromes.size(); j++)
            {
                if (freq.find(a[i] ^ palindromes[j]) != freq.end())
                {
                    ans += freq[a[i] ^ palindromes[j]];
                }
            }
            freq[a[i]]--;
        }
        cout << ans << "\n";
    }
}