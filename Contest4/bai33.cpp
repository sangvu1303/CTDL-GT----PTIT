#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t;
ll n, r ,res;
ll M = 1e9 + 7;

ll daonguoc(ll a) {
	res = 0;
	while(a > 0) {
		ll tmp = a % 10;
		res = res * 10 + tmp;
		a /= 10;
	}
	return res;
}

ll luythua(ll a, ll b) {
	if(b == 1)
		return a % M;
	ll tmp = luythua(a, b/2);
	tmp = tmp * tmp % M;
	if (b % 2) {
		return tmp * a % M;
	}
	return tmp;
}

void xuli() {
	cout << luythua(n, daonguoc(n)) << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		xuli();
	}
	return 0;
}
