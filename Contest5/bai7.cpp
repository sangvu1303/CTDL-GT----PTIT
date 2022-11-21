#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t, n, k;
const ll M = 1e9+7;

void xuli() {
	vector< ll > res(n+1, 0);
	res[0] = 1;
	for(int i=1; i<=n;i++) {
		for(int j=i-1; j >= max(i-k, 0); j--) {
			res[i] = (res[i] + res[j]) % M;
		}
	}
	cout << res[n] << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n >> k;
		xuli();
	}
	return 0;
}
