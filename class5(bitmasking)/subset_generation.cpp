#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<int>> subsets;
    for (int i = 0; i < (1 << n); i++) // 2^n ponjonto loop
    {
        vector<int> subset;
        for (int j = 0; j < n; j++) // n neans no of bits
        {
            int mask = 1 << j;
            if ((i & mask) == 0) // extracting ith bit (0: nibo na) (1: nibo)
            {
                // nibo na
            }
            else
            {
                subset.push_back(a[j]);
            }
        }
        subsets.push_back(subset);
    }
    for (int i = 0; i < subsets.size(); i++)
    {
        for (int j = 0; j < subsets[i].size(); j++)
        {
            cout << subsets[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}