#include <bits/stdc++.h>

using namespace std;

int t, n, a[1001], S[1001];

int xuli(int a[], int n) {
	int kq = 0;
	for(int i=0;i<n;i++){
		S[i]=1;
		for(int j=0;j<i;j++){
			if(a[j]<=a[i] && S[j] + 1 > S[i]){
				S[i] = max(S[i],S[j]+1);
			}
		}
		kq = max(kq,S[i]);
	}
	return n-kq;
}

int main() {
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) 
			cin>>a[i];
		cout<<xuli(a, n)<<endl;
	}
	return 0;
}
