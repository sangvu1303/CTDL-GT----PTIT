#include <bits/stdc++.h>
#define MAX 1000

using namespace std;

int t, n, k;
int X[MAX], ok=true;

void init() {
	cin >> n;
	k = 1; X[k] = n;
}

void result() {
	cout << "(";
	for(int i=1; i<=k; i++) {
		if(i < k) {
			cout << X[i] << " ";	
		} else {
			cout << X[i];	
		}
	}
	cout << ")" << " ";
}

void next_division() {
	int i = k, j, R, S, D;
	while(i>0 && X[i] == 1)
		i--;
	if(i>0) {
		X[i] = X[i] - 1;
		D = k-i+1;
		R = D / X[i];
		S = D % X[i];
		k = i;
		if(R>0) {
			for(j=i;j<=i+R;j++) {
				X[j] = X[i];
			}
			k = k + R;
		}
		if(S>0) {
			k = k+1;
			X[k] = S;
		}
	}
	else ok = false;
}

int main() {
	cin >> t;
	while(t--) {
		init();
		while(ok) {
			result();
			next_division();
		}
		ok = true;
		cout << endl;
	}
	return 0;
}
