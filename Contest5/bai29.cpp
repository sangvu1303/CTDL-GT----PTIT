#include<bits/stdc++.h>

using namespace std;

int t;
string s;

int tinh(string s){
	int i,n=s.length();
	int f[50];
	memset(f,0,sizeof(f));
	if(s[0]=='0') return 0;
	f[0]=1;
	f[1]=1;
	for(i=2;i<=n;i++){
		if(s[i-1]!='0') f[i]=f[i-1];
		
		if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<'7'))
			f[i]=f[i]+f[i-2];
			
	}
	return f[n];
}

int main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<tinh(s)<<endl;
	}
	return 0;
}
