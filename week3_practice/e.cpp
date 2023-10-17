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
        string tmp[n];
        ll ans = 0;
        map<string, int> frq;
        map<char, int> first_char;
        map<char, int> second_char;

        for (int i = 0; i < n; i++)
        {
            cin >> tmp[i];
            frq[tmp[i]]++;
            first_char[tmp[i][0]]++;
            second_char[tmp[i][1]]++;
        }

        for (int i = 0; i < n; i++)
        {
            ans += max(0, first_char[tmp[i][0]] - frq[tmp[i]]);
            ans += max(0, second_char[tmp[i][1]] - frq[tmp[i]]);
            if (first_char[tmp[i][0]] > 0)
                first_char[tmp[i][0]]--;
            if (second_char[tmp[i][1]] > 0)
                second_char[tmp[i][1]]--;
            if (frq[tmp[i]] > 0)
                frq[tmp[i]]--;
        }
        cout << ans << "\n";
    }
}