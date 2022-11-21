#include<bits/stdc++.h>

using namespace std;

int A[505][505], C[505][505];
int t,i,j, n, m;

int tinh(){
	int i,j,kq=0;
	memset(C,0,sizeof(C));
	for(i=1;i<=n;i++) C[i][1] = A[i][1];
	for(i=1;i<=m;i++) C[1][i] = A[1][i];
	
	for(i=2;i<=n;i++){
		for(j=2;j<=m;j++){
			if(A[i][j])
				C[i][j] = min(C[i-1][j],min(C[i][j-1], C[i-1][j-1]))+1;
			else C[i][j] = 0;
			kq = max(kq,C[i][j]);
		}
	}
	return kq;
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
	return 0;
}
