#include <bits/stdc++.h>

using namespace std;

int t, n, dem;
int x;

int main() {
	cin >> t;
	while(t-- ){
		cin >> n;
		dem = 0;
		for(int i=0; i<n; i++) {
			cin >> x;
			if (x == 0)
			dem += 1;
		}
		cout << dem << "\n";
	}
	return 0;
}
