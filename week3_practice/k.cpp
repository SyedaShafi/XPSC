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
        int a[2][2];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
        int tmp[2][2];
        bool flag = false;
        for (int k = 0; k < 4; k++)
        {
            if (flag)
            {
                break;
            }

            if (a[0][0] < a[0][1] and a[1][0] < a[1][1] and a[0][0] < a[1][0] and a[0][1] < a[1][1])
            {
                flag = true;
                break;
            }

            tmp[0][0] = a[1][0];
            tmp[0][1] = a[0][0];
            tmp[1][0] = a[1][1];
            tmp[1][1] = a[0][1];

            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    a[i][j] = tmp[i][j];
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}