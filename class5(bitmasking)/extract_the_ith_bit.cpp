#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int bit_place;
    cin >> bit_place;
    int mask = 1 << bit_place;
    if (n & mask == 0)
        cout << bit_place << "th bit has value :" << 0 << "]\n";
    else
        cout << bit_place << "th bit has value : " << 1 << "\n";
}