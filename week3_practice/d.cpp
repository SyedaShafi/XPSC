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
        int tmp = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                tmp += i;
            else
                tmp += (n - i - 1);
        }
        cout << tmp << "\n";
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int res = max(n - i - 1, i);
            v.push_back(res);
        }
        
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
                tmp += v[i];
            cout << tmp << " ";
        }
        cout << "\n";
    }
}