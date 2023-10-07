#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for (char ch : s)
    {
        sum += (ch - '0');
    }
    int cnt = 0, tmp = sum;
    if (s.size() == 1 and tmp % 10 == tmp)
    {
        cout << "0\n";
        return 0;
    }
    while (true)
    {
        cnt++;
        if (sum > 0 and sum % 10 == sum)
            break;
        sum = 0;
        for (char ch : to_string(tmp))
        {
            sum += (ch - '0');
        }
        tmp = sum;
    }
    cout << cnt << "\n";
}