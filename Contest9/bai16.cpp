#include <bits/stdc++.h>

using namespace std;

int n, m;
int vis[1005];
vector<int> ke[1005];
void BFS(int u)
{
    queue<int> q;
    q.push(u);
    vis[u] = 1;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (auto v : ke[x])
        {
            if (vis[v] == 0)
            {
                vis[v] = 1;
                q.push(v);
            }
        }
    }
}

void nhap()
{
    memset(vis, 0, sizeof(vis));
    for (int i = 1; i <= n; i++)
    {
        ke[i].clear();
    }
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
}

void xuli()
{
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            BFS(i);
            res++;
        }
    }
    cout << res << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nhap();
        xuli();
    }
    return 0;
}