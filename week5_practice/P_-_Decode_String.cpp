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
        vector<char> v;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                int num = 0;
                int val1 = s[i - 1] - '0';
                int val2 = s[i - 2] - '0';
                num = (val2 * 10) + val1;

                char ch = ('a' + num - 1);
                // cout << num << " " << ch << "\n";
                v.push_back(ch);
                i -= 2;
            }
            else
            {
                int val = s[i] - '0';
                char ch = 'a' + val - 1;
                v.push_back(ch);
            }
        }
        for (int i = v.size() - 1; i >= 0; i--)
            cout << v[i];
        cout << "\n";
    }
}