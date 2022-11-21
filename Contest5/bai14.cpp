#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t,n;
ll a[1001][1001];
string s;

int xuli() {
	for(int i=0;i<= n;i++) a[i][0]=0;
	for(int i=0;i<= n;i++) a[0][i]=0;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(s[i-1]==s[j-1] && i != j)
				a[i][j]=a[i-1][j-1]+1;
			else
				a[i][j]=max(a[i-1][j],a[i][j-1]);
		}
	}
	
	return a[n][n];
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		cin >> s;
		cout << xuli() << endl;
	}
	return 0;
}
