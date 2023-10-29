#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, q;
    int case_no = 1;

    while (true)
    {
        cin >> n >> q;
        if (n == 0 and q == 0)
            break;
        cout << "CASE# " << case_no << ":\n";
        case_no++;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        while (q--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(a.begin(), a.end(), x);
            int idx = it - a.begin();
            if (a[idx] == x)
                cout << x << " found at " << idx + 1 << "\n";
            else
                cout << x << " not found\n";
        }
    }
}