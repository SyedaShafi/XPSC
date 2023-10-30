#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<int, int> mp;
    deque<int> dq;
    int frnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] >= 1)
            continue;
        if (dq.empty())
        {
            dq.push_back(a[i]);
            mp[a[i]]++;
        }
        else
        {
            if (dq.size() < k)
            {
                dq.push_front(a[i]);
                mp[a[i]]++;
            }
            else
            {
                int x = dq.back();
                dq.pop_back();
                mp[x]--;
                dq.push_front(a[i]);
                mp[a[i]]++;
            }
        }
    }
    cout << dq.size() << "\n";
    for (int i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
}