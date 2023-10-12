#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;

bool is_palindrome(int s[], int n)
{
    int i = 0, j = n - 1;
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

bool is_equal(int a[], int b[])
{
    bool flag = true;
    for (int i = 0; i < 4; i++)
    {
        if (a[i] != b[i])
        {
            flag = false;
            break;
        }
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
        int tmp[4] = {-1};
        int cnt = 0;
        int a[5];

        a[0] = (h[0] - '0');
        a[1] = (h[1] - '0');
        a[2] = (h[3] - '0');
        a[3] = (h[4] - '0');

        int hrs = 0, min = 0;
        hrs += (h[0] - '0') * 10;
        hrs += (h[1] - '0');

        min += (h[3] - '0') * 10;
        min += (h[4] - '0');

        // for (int i = 0; i < 4; i++)
        //     cout << tmp[i] << " ";
        // cout << hrs << " " << min << "\n";
        // cout << is_equal(tmp, a);

        while (!is_equal(tmp, a))
        {
            // for (int i = 0; i < 4; i++)
            //     cout << tmp[i] << " ";
            if (is_palindrome(tmp, 4))
                cnt++;
            min += x;
            hrs += (min / 60);
            min = (min % 60);
            if (hrs >= 24)
                hrs -= 24;
            if (hrs < 10)
            {
                tmp[0] = 0;
                tmp[1] = hrs;
            }
            else
            {
                tmp[0] = hrs / 10;
                tmp[1] = hrs % 10;
            }

            if (min < 10)
            {
                tmp[2] = 0;
                tmp[3] = min;
            }
            else
            {
                tmp[2] = min / 10;
                tmp[3] = min % 10;
            }
        }
        if (is_palindrome(a, 4))
            cnt++;
        cout << cnt << "\n";
    }
}
