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
        int a[10] = {0};
        if (n < 10)
            cout << n << "\n";
        else
        {
            vector<int> v;
            int tmp = 9;
            while (n > 0)
            {
                if (n < 10 and a[n] == 0)
                {
                    v.push_back(n);
                    break;
                }
                n -= tmp;
                v.push_back(tmp);
                a[tmp] = 1;
                tmp--;
            }

            for (int i = v.size() - 1; i >= 0; i--)
            {
                cout << v[i];
            }
            cout << "\n";
        }
    }
}