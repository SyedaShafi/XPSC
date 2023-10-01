#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == 'A' and s[i + 1] == 'B' and s[i + 2] == 'C')
        {
            cnt++;
            i += 2;
        }
    }
    cout << cnt << "\n";
}