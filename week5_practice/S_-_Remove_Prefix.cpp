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
        int a[n];
        int freq[n + 3] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int index = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            freq[a[i]]++;
            if (freq[a[i]] > 1)
            {
                index = i;
                break;
            }
        }
        cout << index + 1 << "\n";
    }
}