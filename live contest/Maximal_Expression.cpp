#include <iostream>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k >= n)
            cout << n / 2 << "\n";
        else
        {
            if ((n - k + 1) % k > 0)
            {
                cout << k - 1 << "\n";
            }
            else if (n - 1 % k > 0)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
    }
    return 0;
}
