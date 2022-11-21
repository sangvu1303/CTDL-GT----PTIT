#include <bits/stdc++.h>
#define ll long long
#define max 1000000007

using namespace std;

int t, n;
ll a[100000];
ll M = 1000000007;

void sum() {
	ll sum = 0;
	ll res;
	sort(a, a+n);
	for(ll i=0; i<n; i++) {
		res = (a[i]*i) % M;
		sum = (sum + res) % M;
	}
	cout << sum << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		for(ll i=0; i<n; i++) {
			cin >> a[i];
		}
		sum();
	}
	return 0;
}
