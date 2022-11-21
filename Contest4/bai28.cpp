#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t;
ll n, a[100003];

void xuli() {
	int dem = n;
	int mid = n/2;
	for(int i=0; i < n/2; i++) {
		for(int j=0; j< mid; j++) {
			dem--;
			mid++;
			break;
		}
	}
	dem++;
	cout << dem << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> a[i];
			sort(a, a+n);
		}
		xuli();
	}
	return 0;
}
