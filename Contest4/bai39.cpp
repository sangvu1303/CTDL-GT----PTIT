#include <bits/stdc++.h>

using namespace std;

int t, n;
vector< int > a;
vector< int > b;

void xuli() {
	for(int i=0; i<n; i++) {
		if(a[i] != b[i]) {
			cout << i+1 << "\n";
			return;
		}
	}
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		a.resize(n); b.resize(n);
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		for(int i=0; i<n-1; i++) {
			cin >> b[i];
		}
		xuli();
	}
	return 0;
}
