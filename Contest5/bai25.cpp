#include<bits/stdc++.h>

using namespace std;

long long f[55];
int t,n;

void tinh(){
	f[1] = 1; f[2] = 2; f[3] = 4;
	for(int i=4;i<=50;i++){
		f[i] = f[i-1]+f[i-2]+f[i-3];
	}
}

int main() {
	cin>>t;
	while(t--){
		cin>>n;
		tinh();
		cout<<f[n]<<endl;
	}
	return 0;
}
