#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n * 4 <= 1000)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
