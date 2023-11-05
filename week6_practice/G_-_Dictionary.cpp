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
        string s;
        cin >> s;
        int cnt = (s[0] - 'a');
        int index = cnt * 25;
        if (s[1] > s[0])
        {
            index += (s[1] - 'a');
        }
        else
        {
            index += (s[1] - 'a') + 1;
        }
        cout << index << "\n";
    }
}