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
        int n, H, M;
        cin >> n >> H >> M;
        int min_tmp = (H * 60) + M;
        int mh = INT_MAX, mm = INT_MAX;
        while (n--)
        {
            int h, m;
            cin >> h >> m;
            int minutes = (h * 60) + m;

            if (minutes >= min_tmp)
            {
                int tmp = minutes - min_tmp;
                mm = min(mm, tmp);
            }
            else
            {
                int tmp = (minutes - min_tmp) + (24 * 60);
                mm = min(mm, tmp);
            }
        }
        cout << mm / 60 << " " << mm % 60 << "\n";
    }
}