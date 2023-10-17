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
        int n, ele;
        cin >> n;
        vector<int> v[n];
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> ele;
                v[i].push_back(ele);
            }
        }
        int a[n + 3] = {0};

        for (int j = 0; j < n; j++)
        {
            a[v[j][0]]++;
        }

        int mx = 0, idx = 0;

        for (int j = 1; j <= n; j++)
        {
            if (a[j] > mx)
            {
                mx = a[j];
                idx = j;
            }
        }
        ans.push_back(idx);

        for (int i = 0; i < n; i++)
        {
            if (v[i][0] != idx)
            {
                idx = i;
                break;
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            ans.push_back(v[idx][i]);
        }

        for (int ele : ans)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
}