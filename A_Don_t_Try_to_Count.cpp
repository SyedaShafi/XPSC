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
        int n, m;
        cin >> n >> m;
        string x, s, tmp = "";
        cin >> x >> s;
        tmp = x;
        int cnt = 0;
        bool f = false;
        while (1)
        {
            if (tmp.find(s) != string::npos)
            {
                f = true;
                break;
            }
            if ((tmp.size()) >= 100)
                break;
            cnt++;
            tmp += tmp;
        }
        if (!f)
            cnt = -1;

        cout << cnt << "\n";
    }
}