#include <bits/stdc++.h>

using namespace std;

int n, m, cnt;
int vis[1001];
vector<int> ke[1001];

void DFS(int u)
{
    vis[u] = 1;
    cnt++;
    for (auto v : ke[u])
    {
        if (!vis[v])
        {
            DFS(v);
        }
    }
}

void nhap()
{
    cin >> n;
    cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        vis[i] = 0;
        ke[i].clear();
    }
    for (int i = 1; i <= n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
}

void xuli()
{
    DFS(1);
    cout << ((cnt == n) ? "YES" : "NO") << "\n";
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