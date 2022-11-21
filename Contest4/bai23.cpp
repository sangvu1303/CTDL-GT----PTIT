#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t;
ll n, k;

void xuli() {
	ll i = 1;
	while((k-i) % (i * 2) != 0) {
		i = i * 2;
	}
	cout << log2(i) + 1 << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n >> k;
		xuli();
	}
	return 0;
}
