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
        int a[4];
        int sum = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        bool flag = false;
        for (int i = 0; i < 4; i++)
        {
            if (a[i] > (sum - a[i]))
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}