#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    while (q--)
    {
        int h;
        cin >> h;
        auto it1 = lower_bound(a.begin(), a.end(), h);
        auto it2 = upper_bound(a.begin(), a.end(), h);
        int lb = it1 - a.begin();
        int ub = it2 - a.begin();
        if (lb > 0)
            cout << a[--lb] << " ";
        else
            cout << "X ";
        if (ub < n)
            cout << a[ub];
        else
            cout << "X";
        cout << "\n";
    }
}