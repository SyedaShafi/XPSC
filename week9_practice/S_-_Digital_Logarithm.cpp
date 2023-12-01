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
        int a[n], b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int op = 0;

        priority_queue<int> p, q;
        for (int i = 0; i < n; i++)
        {
            p.push(a[i]);
            q.push(b[i]);
        }

        while (!p.empty())
        {
            if (p.top() != q.top())
            {
                if (p.top() > q.top())
                {
                    int tmp = p.top();
                    p.pop();
                    p.push((log10(tmp) + 1));
                }
                else
                {
                    int tmp = q.top();
                    q.pop();
                    q.push((log10(tmp) + 1));
                }
                op++;
            }
            else
            {
                p.pop();
                q.pop();
            }
        }
        cout << op << "\n";
    }
}