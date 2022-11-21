#include <bits/stdc++.h>
using namespace std;
 
int a[1001][1001];
queue <int> q;
 
int n,m,Free[1001], u,v,s;
 
void BFS(int s)
{
     q.push(s);
     Free[s]=0;
     while (!q.empty())
     {
        int u = q.front();
        q.pop();
 
        cout << u <<" ";
 
        for (int v=1; v<=n; v++)
            if (Free[v] && a[u][v]==1)
            {
                Free[v] = 0;
                q.push(v);
            }
     }
}
 
int main()
{
 int t;
 cin>>t;
 for (int i=1; i<=t;i++){
 
 cin >> n >> m>> s;
 for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            a[i][j]=0;
 
 for (int i=1; i<=m; i++)
    {
        cin >> u>> v;
        a[u][v]=1;
    }
 
    for (int i=1; i<=n; i++)
        Free[i]=1;
 
    BFS(s);
    cout<<endl;
}
 return 0;
}
