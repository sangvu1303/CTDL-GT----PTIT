#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t, n, k;
const ll M = 1e9+7;
ll C[1001][1001];

void xuli() {
	int i, j;
	for(i=0; i<=n; i++) {
		for(j=0; j<=i; j++) {
			if(j==0 || j==i) {
				C[i][j] = 1;
			} else {
				C[i][j] = (C[i-1][j-1] + C[i-1][j]) % M;
			}
		}
	}
	cout << C[n][k] << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n >> k;
		xuli();
	}
	return 0;
}
