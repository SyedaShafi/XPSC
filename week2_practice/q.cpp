#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;

bool is_palindrome(string s)
{
    int i = 0, j = s.size() - 1;
    bool flag = true;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            flag = false;
            break;
        }
        i++, j--;
    }
    return flag;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string h;
        int x;
        cin >> h;
        cin >> x;
        int hour = 0, min = 0;
        int cnt = 0;
        if (is_palindrome(h))
            cnt++;

        string tmp = "";

        while (tmp != h)
        {
            cnt++;
            tmp = h;
            hour += (tmp[0] - '0') * 10;
            hour += (tmp[1] - '0');

            min += (tmp[3] - '0') * 10;
            min += (tmp[4] - '0');
            min += x;

            hour += (min / 60);
            min = (min % 60);
            tmp.clear();
            if (hour >= 24)
                hour = hour - 24;
            for (char c : to_string(hour))
            {
                tmp.push_back(c);
            }
            tmp.push_back(':');
            for (char c : to_string(min))
            {
                tmp.push_back(c);
            }
        }
        cout << cnt << "\n";
    }
}
