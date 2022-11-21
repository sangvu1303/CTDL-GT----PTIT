#include<bits/stdc++.h>

using namespace std;

int n,t;

bool xuli(int a[],int n) {
	int b[n];
	copy(a,a+n,b);
	sort(b,b+n);
	for(int i=0;i<n;i++) {
		if(!(a[i]==b[i])&&!(a[n-i-1]==b[i]))
		return false;
	}
	return true;
}

int main() {
	cin>>t;
	while(t--) {
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(xuli(a,n)==true)
			cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
	return 0;
}
