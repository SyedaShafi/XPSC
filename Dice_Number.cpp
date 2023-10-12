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
        int ele;
        int a[6 + 1] = {0};
        int b[6 + 1] = {0};
        for (int i = 0; i < 3; i++)
        {
            cin >> ele;
            a[ele]++;
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> ele;
            b[ele]++;
        }
        string tmp = "tie";
        for (int i = 6; i >= 1; i--)
        {
            if (a[i] > b[i])
            {
                tmp = "Alice";
                break;
            }
            else if (a[i] < b[i])
            {
                tmp = "Bob";
                break;
            }
            else if (a[i] > 0 and b[i] > 0 and a[i] == b[i])
            {
                tmp = "Tie";
            }
        }
        cout << tmp << "\n";
    }
}