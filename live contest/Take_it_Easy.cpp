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
        set<int> v;
        int ele;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            v.insert(ele);
        }
        for (int i = 0; i < n; i++)
        {
            auto a = v.begin();
            auto b = v.end();
            b--;
            int f = *a;
            int l = *b;
            if (l - 2 < 0 || v.size() == 1)
                break;
            v.insert(f + 2);
            v.insert(l - 2);
            v.erase(f);
            v.erase(l);
        }

        if (v.size() == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}