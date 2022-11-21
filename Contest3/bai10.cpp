#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t; 
ll n;

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		ll OPT = 0;
		priority_queue<int, vector<int>, greater<int> > pg; // cau truc du lieu hang doi uu tien
		for(ll i=0; i<n; i++) {
			ll a;
			cin >> a;
			pg.push(a); // day vao hang doi
		}
	
		while(pg.size() > 1) {
			ll first = pg.top(); pg.pop();
			ll second = pg.top(); pg.pop();
			ll sum = first + second;
			OPT = OPT+sum;
			pg.push(sum);
		}
		cout << OPT << "\n";
	}
	return 0;
}
