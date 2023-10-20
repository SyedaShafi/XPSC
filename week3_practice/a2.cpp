#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < 256; i++)
    {
        int res = a ^ i;
        if (res == b)
        {
            cout << i << "\n";
            break;
        }
    }
}