#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int bit;
    cin >> bit;
    int x = 63;
    int mask = 1 << bit;
    // int newMask = x ^ mask; // complemented mask
    int newMask = (~mask);//1s complement another way to generate complemented mask
    int finalAns = (n & newMask);
    cout << finalAns << "\n";
}