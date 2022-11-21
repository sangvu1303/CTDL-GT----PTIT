#include <bits/stdc++.h>
using namespace std;
 
int a[1001][1001];
int t,n,u,v,m;

 
int main()
{
 cin>>t;
 for (int i=1; i<=t;i++){
 
 cin >> n >> m;
 for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            a[i][j]=0;
 
 for (int i=1; i<=m; i++)
    {
        cin >> u>> v;
        a[u][v]=1;
        
    }
 
    for (int i=1; i<=n; i++){
    	cout<<i<<": ";
    	for(int j=1;j<=n; j++)
    		if (a[i][j]==1) {
    			cout<<j<<" ";
			}
		cout<<endl;
	}
 
   }
 return 0;
}
