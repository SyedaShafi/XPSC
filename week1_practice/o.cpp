#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    cin >> s;
    int a[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        a[s[i] - 'a']++;
    }
    bool f = true;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] == 0)
        {
            cout << char(i + 'a') << "\n";
            f = false;
            break;
        }
    }
    if (f)
        cout << "None\n";
}