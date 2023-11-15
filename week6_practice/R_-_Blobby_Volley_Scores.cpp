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
        string s;
        cin >> s;
        char ser = 'A';
        int alic = 0, bob = 0;
        for (int i = 0; i < n; i++)
        {
            if (ser == 'A' and ser == s[i])
                alic++;
            if (ser == 'B' and ser == s[i])
                bob++;
            ser = s[i];
        }
        cout << alic << " " << bob << "\n";
    }
}