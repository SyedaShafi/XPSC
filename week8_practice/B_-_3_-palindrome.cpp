#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (i % 2 == 0)
            {
                cout << "aa";
            }
            else
            {
                cout << "bb";
            }
        }
    }
    else
    {
        string last = "";
        for (int i = 0; i < n / 2; i++)
        {
            if (i % 2 == 0)
            {
                last = "a";
                cout << "aa";
            }
            else
            {
                last = "b";
                cout << "bb";
            }
        }
        if (last == "a")
            cout << "b";
        else
            cout << "a";
    }
}