#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    ll sum = 0, ele, odd = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        sum += ele;

        if (ele < odd and ele % 2 != 0)
            odd = ele;
    }
    if (sum % 2 != 0)
        sum -= odd;
    cout << sum << "\n";
}
