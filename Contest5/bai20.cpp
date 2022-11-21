#include<bits/stdc++.h>

using namespace std;

int t; 
string s;

int doi(char c){
	return c-'0';
}

long long tinh(string s){
	int n=s.length(),i;
	long long F[15],kq=0;
	F[0] = doi(s[0]);
	kq = F[0];
	for(i=1;i<n;i++){
		long long t = doi(s[i]);
		F[i] = F[i-1] * 10 + t * (i+1);
		kq+=F[i]; 
	}
	return kq;
}

int main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<tinh(s)<<endl;
	}
	return 0;
}
