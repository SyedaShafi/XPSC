#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 2 * 1e5 + 7;

int leaf[N];
bool vis[N];
void dfs(int node, vector<int> graph[N])
{
    leaf[node] = 0;
    vis[node] = true;
    for (auto ele : graph[node])
    {
        if (!vis[ele])
        {
            dfs(ele, graph);
            leaf[node] += leaf[ele];
        }
    }
    if (graph[node].size() == 0)
    {
        leaf[node] = 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int u, v;
        vector<int> graph[N];
        memset(vis, false, sizeof(vis));
        memset(leaf, 0, sizeof(leaf));
        for (int i = 0; i < n - 1; i++)
        {
            cin >> u >> v;
            if (u > v)
                swap(u, v);
            graph[u].push_back(v);
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     cout << "Node " << i << " : ";
        //     for (auto ele : graph[i])
        //     {
        //         cout << ele << " ";
        //     }
        //     cout << "\n";
        // }
        dfs(1, graph);
        int q;
        cin >> q;
        while (q--)
        {
            int a, b;
            cin >> a >> b;
            cout << leaf[a] * leaf[b] << "\n";
        }
    }
}