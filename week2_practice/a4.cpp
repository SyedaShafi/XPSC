//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars(string S);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        cout << longestSubstrDistinctChars(S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends

int longestSubstrDistinctChars(string s)
{
    // your code here
    int i = 0, j = 0;
    int fr[26] = {0};
    map<char, int> mp;
    int unq = 0;
    int ans = 0;
    int n = s.size();
    while (j < n)
    {
        fr[s[j] - 'a']++;
        if (fr[s[j] - 'a'] == 1)
        {
            mp[s[j]] = j;
            unq++;
        }
        else if (fr[s[j] - 'a'] > 1)
        {
            unq = 0;
            j = mp[s[j]];
            mp.clear();
            for (int i = 0; i < 26; i++)
            {
                fr[i] = 0;
            }
        }
        ans = max(ans, unq);
        j++;
    }
    return ans;
}