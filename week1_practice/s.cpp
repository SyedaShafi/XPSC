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
        vector<int> v;
        int ele, j = 1;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> ele;
            if (ele > j)
            {
                while (ele > j)
                {
                    ans++;
                    j++;
                }
            }
            ans++;
            j++;
        }

        cout << ans - n << "\n";
    }
}