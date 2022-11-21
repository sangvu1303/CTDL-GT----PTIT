#include<bits/stdc++.h>
#include<cmath>
using namespace std;

long long F[100];

char FiboW(int n,long long k){
	if(n==1) return  'A';
	if(n==2) return 'B';
	
	if(k<=F[n-2]) return FiboW(n-2,k);
	return (FiboW(n-1,k-F[n-2]));
}

int main(){
	int t,n;
	long long k;
	
	F[1]=1;F[2]=1;
	for(int i=3;i<=92;i++) F[i]=F[i-1]+F[i-2];
	
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<FiboW(n,k)<<endl;
	}
}
