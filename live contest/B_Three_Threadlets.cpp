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
        vector<int> v;
        int ele;
        for (int i = 0; i < 3; i++)
        {
            cin >> ele;
            v.push_back(ele);
        }
        bool flag = true;
        for (int j = 0; j < 3; j++)
        {
            flag = true;
            sort(v.begin(), v.end());
            for (int i = 0; i < v.size() - 1; i++)
            {
                if (v[i] != v[i + 1])
                {
                    flag = false;
                }
            }

            if (flag)
                break;

            int n = v.size();
            int tmp1 = v[0];
            int tmp2 = v[n - 1] - v[0];

            v[n - 1] = tmp1;
            v.push_back(tmp2);
        }
        flag = true;
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] != v[i + 1])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}