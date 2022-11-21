#include <bits/stdc++.h>
#include <queue>
using namespace std;
int n, m, vis[1001];
vector<int> ke[1001];
void nhap()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        ke[i].clear();
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
    }
}
void reset()
{
    memset(vis, 0, sizeof(vis));
}
int BFS(int u)
{
    int cnt = 0;
    queue<int> q;
    q.push(u);
    vis[u] = 1;
    while (!q.empty())
    {
        cnt++;
        int u1 = q.front();
        q.pop();
        for (auto v : ke[u1])
        {
            if (vis[v] == 0)
            {
                vis[v] = 1;
                q.push(v);
            }
        }
    }
    return cnt;
}
bool xuli()
{
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        reset();
        if (BFS(i) != n)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nhap();
        reset();
        cout << ((xuli() == 1) ? "YES" : "NO") << '\n';
    }
    return 0;
}