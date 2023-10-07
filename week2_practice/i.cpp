#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int yr;
    cin >> yr;
    set<int> st;
    bool f = false;
    while (true)
    {
        yr++;
        for (char ch : to_string(yr))
        {
            st.insert(ch - '0');
        }
        if (st.size() == 4)
        {
            break;
        }
        st.clear();
    }
    cout << yr << "\n";
}