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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a;
        vector<pair<int, int>> b;
        int ele;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            a.push_back({ele, i});
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            b.push_back({ele, i});
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int ans[n];
        for (int i = 0; i < n; i++)
        {
            ans[a[i].second] = b[i].first;
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}