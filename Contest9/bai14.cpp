#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
queue<int> q;

int n, m, Free[1001], u, v, s, dem, luu[1001], di[1001], t1;

void BFS(int s, int k)
{
    q.push(s);
    Free[s] = 0;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        luu[k] = x;
        dem = k++;
        for (int y = 1; y <= n; y++)
            if (Free[y] && a[x][y] == 1)
            {
                Free[y] = 0;
                q.push(y);
            }
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                a[i][j] = 0;

        for (int i = 1; i <= m; i++)
        {
            cin >> u >> v;
            a[u][v] = 1;
            a[v][u] = 1;
        }

        for (int i = 1; i <= n; i++)
            Free[i] = 1;
        int cung = 1;
        for (int i = 1; i <= n; i++)
        {
            if (Free[i] == 1)
            {
                dem = 1;
                BFS(i, dem);
                int ok = 1;
                for (int i = 1; i <= dem; i++)
                    di[luu[i]] = cung;
                cung++;
            }
        }
        cin >> t1;
        for (int i = 1; i <= t1; i++)
        {
            cin >> u >> v;
            if (di[u] == di[v])
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
