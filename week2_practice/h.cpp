#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    set<int> st;
    int n, ct = 0;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        int tmp = j;
        for (int i = 2; i * i <= j; i++)
        {
            while (tmp % i == 0)
            {
                st.insert(i);
                tmp /= i;
            }
        }
        if (tmp > 2)
            st.insert(tmp);
        if (st.size() == 2)
            ct++;
        st.clear();
    }
    cout << ct << "\n";
}