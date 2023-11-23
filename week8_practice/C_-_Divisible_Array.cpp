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
        int tmp = 2;
        for (int i = 0; i < n; i++)
        {
            cout << tmp << " ";
            tmp += 2;
        }
        cout << "\n";
    }
}