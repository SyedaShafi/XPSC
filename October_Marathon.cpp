#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    if (n < 3)
        cout << "GOLD\n";
    else if (n >= 3 and n < 6)
        cout << "SILVER\n";
    else
        cout << "BRONZE\n";
}