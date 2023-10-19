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
        int k, n;
        cin >> k >> n;
        int point = 1, diff = 1;
        for (int i = 0; i < k; i++)
        {
            cout << point << " ";
            if ((n - (point + diff)) >= (k - i -2))
            {
                point += diff;
                diff++;
            }
            else
                point++;
        }
        cout << "\n";
    }
}