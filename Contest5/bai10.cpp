#include<bits/stdc++.h>

using namespace std;

int A[1005][1005], C[1005][1005];
int t,i,j,n,m;

int tinh(){
	int i,j,kq=0;
	memset(C,0,sizeof(C));
	for(i=1;i<=n;i++) C[i][1] = C[i-1][1] + A[i][1];
	for(i=1;i<=m;i++) C[1][i] = C[1][i-1] + A[1][i];
	
	for(i=2;i<=n;i++) {
		for(j=2;j<=m;j++){
				C[i][j] = min(C[i-1][j],min(C[i][j-1], C[i-1][j-1])) + A[i][j];
		}
	}
	return C[n][m];
}

int main() {
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
				cin>>A[i][j];
		cout<<tinh()<<endl;
	}
}
