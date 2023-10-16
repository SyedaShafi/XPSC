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
        set<string> st;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp[i];
            st.insert(tmp[i]);
        }

        map<char, int> first_char;
        map<char, int> second_char;

        for (auto ele : st)
        {
            first_char[ele[0]]++;
            second_char[ele[1]]++;
        }

        for (int i = 0; i < n; i++)
        {
            ans += first_char[tmp[i][0]] + second_char[tmp[i][1]] - 2;
            if (first_char[tmp[i][0]] > 0)
                first_char[tmp[i][0]]--;
            if (second_char[tmp[i][0]] > 0)
                second_char[tmp[i][1]]--;
        }
        cout << ans << "\n";
    }
}