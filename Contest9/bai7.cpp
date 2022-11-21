#include <bits/stdc++.h>
using namespace std;
 
int a[1001][1001]; 
 
int n, m, Free[1001], u, v, s,t;
 
void DFS(int u)
{
    cout << u <<" ";
    Free[u] = false;
    for (int v = 1; v <= n; v++)
        if (a[u][v] == 1 && Free[v])
            DFS(v);
}
 
int main()
{	cin>>t;
	for(int i=1; i<=t; i++){
	
    cin >> n >> m >> s;
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
    DFS(s);
    cout<<endl;
	}
    return 0;
}
