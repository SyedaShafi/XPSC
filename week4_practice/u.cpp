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
        set<char> st;
        int days = 0;
        for (int i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
            if (st.size() > 3)
            {
                days++;
                st.clear();
                i--;
            }
        }
        if (st.size() > 0)
        {
            days++;
        }
        cout << days << "\n";
    }
}