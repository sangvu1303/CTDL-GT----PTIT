#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t;
ll n, fi=0, se=0;

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		for(ll i=0;i*7<=n;i++) {
			ll j=(n-i*7)/4;
			if(i*7 + j*4 == n) {
				fi = j;
				se = i;
			}
		}
		if(fi==0 && se==0) {
			cout << "-1" << "\n";
			continue;
		} else {
			for(int i=1; i<=fi;i++) {
			cout << "4";
			}
			for(int i=1;i<=se;i++) {
				cout << "7";
			}
			cout << "\n";
		}
		fi =0; se =0;
	}
	return 0;
}
