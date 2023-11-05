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
        string s;
        cin >> s;
        int p;
        cin >> p;
        int price = 0;
        int n = s.size();
        int freq[26] = {0};
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
            price += (s[i] - 'a') + 1;
        }

        if (price > p)
        {
            for (int i = 25; i >= 0; i--)
            {
                if (freq[i] > 0)
                {
                    // cout << price << " \n";
                    while (freq[i] != 0 and price > p)
                    {
                        price -= (i + 1);
                        freq[i]--;
                    }
                    if (price <= p)
                    {
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (freq[s[i] - 'a'] > 0)
            {
                cout << s[i];
                freq[s[i] - 'a']--;
            }
        }
        cout << "\n";
    }
}