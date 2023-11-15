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
        if (n < 5)
            cout << 0 << " " << n << "\n";
        else
            cout << 1 << " " << n - 1 << "\n";
    }
    return 0;
}
