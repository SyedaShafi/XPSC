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
        int a[n + 3] = {0};
        int ele, ans = -1;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            a[ele]++;
            if (!flag and a[ele] == 3)
            {
                ans = ele;
                flag = true;
            }
        }
        cout << ans << "\n";
    }
}