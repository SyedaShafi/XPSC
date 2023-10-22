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
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size(), m = s2.size();
        if (s1[n - 1] < s2[m - 1])
            cout << ">\n";
        else if (s1[n - 1] > s2[m - 1])
            cout << "<\n";
        else
        {
            if (n == m)
                cout << "=\n";
            else if (s1[n - 1] == 'S')
            {
                if (n > m)
                    cout << "<\n";
                else
                    cout << ">\n";
            }
            else
            {
                if (n > m)
                    cout << ">\n";
                else
                    cout << "<\n";
            }
        }
    }
}