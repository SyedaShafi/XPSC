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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int tmp;
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (a[j] - a[i] == a[k] - a[j])
                    {
                        flag = true;
                    }
                }
            }
            if (flag)
                break;
        }
        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}