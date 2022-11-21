#include <bits/stdc++.h>

using namespace std;

int t, n, a[1001], S[1001];

int xuli(int a[], int n) {
	int i, j, sum = 0;
	for(int i=0; i<n; i++)
		S[i] = a[i];
	for(int i=0; i<n;i++) {
		for(j=0;j<i;j++){
			if(a[j] < a[i] && S[i] < S[j]+a[i]){
				S[i] = S[j] + a[i];
			}
		}
		if(sum < S[i]) {
			sum = S[i];
		}
	}
	
	return sum;
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i < n; i++) {
			cin >> a[i];
		}
		cout << xuli(a, n) << endl;	
	}
	return 0;
}
