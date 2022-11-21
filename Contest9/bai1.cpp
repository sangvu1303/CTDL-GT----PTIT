#include <bits/stdc++.h>

using namespace std;
#define ll long long

int n, m;
int a[1001][1001];

void xuli()
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 1)
                cout << j << ' ';
        }
        cout << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        // Gan tat ca gia tri cua a la 0
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= m; i++)
        {
            int u, v;
            cin >> u >> v;
            a[u][v] = a[v][u] = 1; // Cho tat ca mang 2 chieu bang 1
        }
        xuli();
    }
    return 0;
}