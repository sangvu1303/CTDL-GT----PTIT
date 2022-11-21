#include <bits/stdc++.h>

using namespace std;

int t;
long long tuso, mauso;

void xuli(int tuso, int mauso) {
	if(tuso >= mauso) {
		return;
	}
	if(tuso==0 || mauso==0) {
		return;
	}
	if(mauso % tuso == 0) {
		cout << "1/" << mauso/tuso << "\n";
		return;
	}
	long long n = mauso / tuso + 1;
	cout << "1/" << n << " + ";
	xuli(tuso*n-mauso, mauso*n);
	cout << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> tuso >> mauso;
		xuli(tuso, mauso);
	}
	return 0;
}
