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
        vector<int> v(n);
        ll ans = 0;
        priority_queue<int> pq;
        int ele;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            if (ele > 0)
                pq.push(ele);
            else if (ele == 0 and !pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }
        cout << ans << "\n";
    }
}