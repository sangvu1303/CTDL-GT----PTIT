#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
queue<int> q;

int n, m, Free[1001], u, v, s, dem, luu[1001], sc, truoc[1001];

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
        if (x == sc)
        {
            memset(Free, 0, sizeof(Free)); // khi gap dinh sc thi dung bfs
        }

        for (int y = 1; y <= n; y++)
            if (Free[y] && a[x][y] == 1)
            {
                Free[y] = 0;
                q.push(y);
                truoc[y] = x; //luu lai vet duong di theo bfs
            }
    }
}

int inkq(int x)
{
    if (truoc[x] == -1)
    {
        cout << x << " ";
    }
    else
    {
        inkq(truoc[x]);
        cout << x << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        cin >> n >> m >> s >> sc;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                a[i][j] = 0;

        for (int i = 1; i <= m; i++)
        {
            cin >> u >> v;
            a[u][v] = 1;
        }

        for (int i = 1; i <= n; i++)
            Free[i] = 1;
        dem = 1;
        truoc[s] = -1;
        BFS(s, 1);
        int ok = 1;
        for (int i = 1; i <= dem; i++)
            if (luu[i] == sc)
                ok = 0;
        if (ok == 0)
        {
            inkq(sc);
        }
        else
            cout << "-1";
        cout << endl;
    }
    return 0;
}
