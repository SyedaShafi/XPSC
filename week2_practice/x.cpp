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
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        int x = -1, y = -1;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] == '#')
                {
                    if (i - 1 >= 0 and j - 1 >= 0 and j + 1 < 8 and i + 1 < 8)
                    {
                        if (a[i - 1][j - 1] == '#' and a[i - 1][j + 1] == '#' and a[i + 1][j - 1] == '#' and a[i + 1][j + 1] == '#')
                        {
                            x = i, y = j;
                            break;
                        }
                    }
                }
            }
        }
        cout << x + 1 << " " << y + 1 << "\n";
    }
}