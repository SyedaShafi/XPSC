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
        int time = 0;
        if (n > 50)
        {
            int def = n - 50;
            time += def / 3;
            int rem = (def % 3);
            if (rem == 2)
                time += 4;
            else if (rem == 1)
            {
                time += 2;
            }
        }
        else if (n < 50)
        {
            int def = 50 - n;
            time += (def / 2);
            int rem = (def % 2);
            if (rem == 1)
                time += 3;
        }
        cout << time << "\n";
    }
}