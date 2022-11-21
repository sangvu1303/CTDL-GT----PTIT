#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t, a[202], c[202];
ll n, s;

void xuli() {
	for(int i=1; i<=n; i++)
		c[i] = 0;
	for(int i=1; i<=n; i++) {
		for(int j=s; j>=a[i]; j--) {
			if(!c[j] && c[j-a[i]])
				c[j] = 1;
		}
	}
	if(c[s])
		cout << "Yes" << "\n";
	else
		cout << "No" << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n >> s;
		c[0] = 1;
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		xuli();
	}
	return 0;
}
