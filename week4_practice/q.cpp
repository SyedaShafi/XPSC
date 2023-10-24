#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 2 * 1e5 + 7;
void dfs(int node, vector<int> graph[], ll leaf[], int vis[], int parent)
{
    vis[node] = 1;
    if (graph[node].size() == 1 and graph[node][0] == parent)
    {
        leaf[node] = 1;
    }
    for (auto ele : graph[node])
    {
        if (!vis[ele])
        {
            dfs(ele, graph, leaf, vis, node);
            leaf[node] += leaf[ele];
        }
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
        vector<int> graph[n + 2];

        ll leaf[n + 2] = {0};
        int vis[n + 2] = {0};

        for (int i = 0; i < n - 1; i++)
        {
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
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
        dfs(1, graph, leaf, vis, -1);

        int q;
        cin >> q;
        while (q--)
        {
            int a, b;
            cin >> a >> b;
            // cout << leaf[a] << " " << leaf[b] << "\n";
            cout << leaf[a] * leaf[b] << "\n";
        }
    }
}