#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n > 0)
    {
        if (n == 3)
        {
            v.push_back(3);
            n -= 3;
        }
        else if (n >= 2)
        {
            v.push_back(2);
            n -= 2;
        }
    }
    cout << v.size() << "\n";
    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << "\n";
}