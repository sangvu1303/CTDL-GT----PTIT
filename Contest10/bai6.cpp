#include <bits/stdc++.h>

using namespace std;

int n, m;
bool flag = false;
vector<int> a[100005];
int vis[100005];

void nhap()
{
	cin >> n >> m;
	for (int i = 1; i <= 100005; i++)
	{
		a[i].clear();
		vis[i] = false;
	}
	for (int i = 1; i <= m; i++)
	{
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
}

void DFS(int u, int cnt)
{
	vis[u] = true;
	cnt++;
	for (auto v : a[u])
	{
		if (!vis[v])
		{
			DFS(v, cnt);
		}
	}
}

void xuli()
{
	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		if (vis[i] == false)
		{
			int cnt = 0;
			DFS(i, cnt);
			res = max(res, cnt);
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
