#include<bits/stdc++.h>

using namespace std;

long long F[30][30];
int t,n,m;

void tinh() {
	for(int i=0;i<=25;i++){
		F[i][0] = 1;
		F[0][i] = 1;
	}
	
	for(int i=1;i<=25;i++){
		for(int j=1;j<=25;j++){
			F[i][j] = F[i-1][j] + F[i][j-1];
		}
	}
}

int main() {
	cin>>t;
	while(t--){
		cin>>n>>m;
		tinh();
		cout<<F[n][m]<<endl;
	}
}
