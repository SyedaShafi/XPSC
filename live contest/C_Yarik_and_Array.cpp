#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
ll maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0,
        start = 0, end = 0, s = 0;
    bool even = false, odd = false;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
            even = true;
        else
            odd = true;
        if (even)
        {
            even = false;
            max_ending_here += a[i];
            if (max_so_far < max_ending_here)
            {
                max_so_far = max_ending_here;
                start = s;
                end = i;
            }
            if (max_ending_here < 0)
            {
                max_ending_here = 0;
                s = i + 1;
            }
        }
        else if (odd)
        {
            odd = false;
            max_ending_here += a[i];
            if (max_so_far < max_ending_here)
            {
                max_so_far = max_ending_here;
                start = s;
                end = i;
            }
            if (max_ending_here < 0)
            {
                max_ending_here = 0;
                s = i + 1;
            }
        }
        else
        {
            max_ending_here = 0;
            s = i;
        }
    }
    ll sum = 0;
    for (int i = start; i <= end; i++)
        sum += a[i];
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << maxSubArraySum(a, n) << "\n";
    }
}