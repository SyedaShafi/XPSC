#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        if (ele % k == 0)
            cnt++;
    }
    cout << cnt << "\n";
}