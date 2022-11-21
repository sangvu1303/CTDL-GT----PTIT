#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t, n, k;
ll arr[100000];

void xuli() {
	ll sum1 = 0, sum2 = 0, hieu;
	sort(arr, arr+n);
	if(n-k>k) {
		for(ll i=0; i< n;i++) {
			if(i<k) {
				sum1 = sum1 + arr[i];
			}
			if (i>=k) {
				sum2 = sum2 + arr[i];
			}			
		}	
	}
	if(n-k<=k) {
		for(ll i=0; i<n;i++) {
			if(i<(n-k)) {
				sum1 = sum1 + arr[i];
			}
			if(i>=(n-k)) {
				sum2 = sum2 + arr[i];
			}	
		}
	}	
	hieu = sum2-sum1;
	cout << hieu << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n >> k;
		for(ll i=0; i<n;i++) {
			cin >> arr[i];
		}
		xuli();
	}
	return 0;
}
