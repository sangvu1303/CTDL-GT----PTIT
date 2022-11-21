#include <bits/stdc++.h>

using namespace std;

int t, a, b, c;

void xuli() {
	int dem = 0;
	for(int i=c; i<sqrt(c); i--) {
		dem++;
		if(a % i == 0 && b % i == 0) {
			return;	
		}
	}
	cout << dem << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> a >> b;
		if (a > b) {
			c = a;
		} else {
			c = b;
		}
		xuli();	
	}
	return 0;
}
