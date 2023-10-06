//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        int k = pat.size();
        int freq[26] = {0};
        for (char c : pat)
        {
            freq[c - 'a']++;
        }

        int frq[26] = {0};
        int i = 0, j = 0, ans = 0;
        while (j < txt.size())
        {
            bool f = true;
            frq[txt[j] - 'a']++;
            if (j >= k - 1)
            {
                for (int c = 0; c < 26; c++)
                {
                    if (freq[c] != frq[c])
                    {
                        f = false;
                        break;
                    }
                }

                if (f)
                    ans++;
                frq[txt[i] - 'a']--;
                i++;
            }
            j++;
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends