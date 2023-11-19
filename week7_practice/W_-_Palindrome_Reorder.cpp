#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    cin >> s;
    map<char, int> fr;
    for (int i = 0; i < s.size(); i++)
    {
        fr[s[i]]++;
    }
    // cout << s << "\n";
    bool flag = true;
    string tmp = "";
    string ch = "";
    int cnt = 0;
    for (auto ele : fr)
    {
        char x = ele.first;
        int y = ele.second;

        if (y > 0 and y % 2 == 0)
        {
            string p(y / 2, x);
            tmp += p;
        }
        else
        {
            cnt++;
            string p(y / 2, x);
            tmp += p;
            ch = x;
        }
    }
    if (cnt > 1)
        cout << "NO SOLUTION\n";
    else
    {
        if (ch != "")
        {
            cout << tmp << ch;
            reverse(tmp.begin(), tmp.end());
            cout << tmp << "\n";
        }
        else
        {
            cout << tmp;
            reverse(tmp.begin(), tmp.end());
            cout << tmp << "\n";
        }
    }
}