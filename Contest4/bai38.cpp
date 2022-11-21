#include <bits/stdc++.h>

using namespace std;

int t, n, m, k, b;
vector< int > a;

void xuli() {
	sort(a.begin(), a.end());
	cout << a[k-1] << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> m >> n >> k;
		b = n+m;
		a.resize(b);
		for(int i=0; i < b; i++) {
			cin >> a[i];
		}
		xuli();
	}
	return 0;
}
