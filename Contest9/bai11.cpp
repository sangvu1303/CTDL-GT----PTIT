#include <bits/stdc++.h>
using namespace std;
 
int a[1001][1001]; 
 
int n, m, Free[1001], u, v, s,t,sc,luu[1001],dem;
 
void DFS(int u,int k)
{
    luu[k]=u;
    dem=k++;
    if (u==sc) {
    	for (int x=1; x<=n; x++)
    		Free[x]=false;
	}
    Free[u] = false;
    for (int v = 1; v <= n; v++)
        if (a[u][v] == 1 && Free[v])
            DFS(v,k);
}
 
int main()
{	cin>>t;
	for(int i=1; i<=t; i++){
	
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
    dem=1;
    DFS(s,1);
    if (luu[dem]==sc) {
    	for (int i=1;i<=dem; i++) cout<<luu[i]<<" ";
	} else cout<<"-1";
    cout<<endl;
	}
    return 0;
}
