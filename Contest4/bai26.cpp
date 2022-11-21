#include <bits/stdc++.h>
#include <string>

using namespace std;

int k;
string a, b;
vector<int> res;

void xuli() {
	int st1 = 0, st2 = 0;
	
	for(int i=0; i < a.length(); i++) {
		st1 = st1 * k + (a[i] - '0');
	}
	
	for(int i=0; i < b.length(); i++) {
		st2 = st2 * k + (b[i] - '0');
	}
	
	int kq = st1 + st2;
	while(kq) {
		res.push_back(kq % k);
		kq /= k;
	}
	for(int i= res.size()-1; i >= 0; i--) {
		cout << res[i];
	}
}

int main() {
	cin >> k >> a >> b;
	xuli();
	return 0;
}
