#include <bits/stdc++.h>

using namespace std;

int t, n, x;
vector< int > a;

void xuli() {
	int i = 0;
	while(a[i] <= x && i < n) {
		i++;
	}
	if(i == 0) {
		cout << "-1" << "\n";
	} else {
		cout << i << "\n";
	}
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n >> x;
		a.resize(n);
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		xuli();
	}
	return 0;
}
