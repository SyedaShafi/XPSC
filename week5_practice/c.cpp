#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5 + 10;
int n, cows;
int positions[N];
bool can_place_cows(int minDist)
{
    int last_pos = -1;
    int cows_cnt = cows;
    for (int i = 0; i < n; i++)
    {
        if (abs(positions[i] - last_pos) >= minDist || last_pos == -1)
        {
            last_pos = positions[i];
            cows_cnt--;
        }
        if (cows_cnt == 0)
            break;
    }
    return cows_cnt == 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> cows;
        for (int i = 0; i < n; i++)
        {
            cin >> positions[i];
        }
        sort(positions, positions + n);
        int lo = 0, hi = 1e9, mid, ans;
        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (can_place_cows(mid))
            {
                ans = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }

        cout << ans << "\n";
    }
}