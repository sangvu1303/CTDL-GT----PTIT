#include <bits/stdc++.h>

using namespace std;

const int M = 1e5+5;
int t, n;
int a[M], b[M];

void xuli() {
	sort(b, b+n);
	int i = 0; 
	int m = n-1;
	while(i < n && a[i] == b[i]) i++;
	while(m >= 0 && a[m] == b[m]) m--;
	i = min(i, n-1);
	m = max(m, 0);
	cout << i+1 << ' ' << max(i, m)+1 << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n;i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		xuli();
	}
	return 0;
}
