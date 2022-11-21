#include<bits/stdc++.h>

using namespace std;

int A[1005], C[1005], F[1005][1005];
int t, n, v;

int tinh(){
	memset(F,0,sizeof(F));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=v;j++){
			F[i][j] = F[i-1][j];
			if(j>=A[i]){
				F[i][j] = max(F[i][j], F[i-1][j-A[i]] + C[i]);
			}			
		}			
	}
	return F[n][v];
}

main(){
	cin>>t;
	while(t--){
		cin>>n>>v;
		for(int i=1;i<=n;i++) cin>>A[i];
		for(int i=1;i<=v;i++) cin>>C[i];
		cout<<tinh()<<endl;
	}
}
