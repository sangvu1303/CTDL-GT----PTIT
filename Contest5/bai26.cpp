#include<bits/stdc++.h>

using namespace std;

int A[1005], F[205][25005];
int n, v;

int tinh(){
	int i,j;
	memset(F,0,sizeof(F));
	for(i=1;i<=n;i++){
		for(j=1;j<=v;j++){
			F[i][j] = F[i-1][j];
			if(j>=A[i]){
				F[i][j] = max(F[i][j], F[i-1][j-A[i]] + A[i]);
			}			
		}			
	}
	return F[n][v];
}

main(){
	int i,j;
	cin>>v>>n;
	for(i=1;i<=n;i++) cin>>A[i];
	cout<<tinh()<<endl;
}
