#include <bits/stdc++.h>
#include <string>

using namespace std;

int t;
string s;
vector<int> v;

void xuli() {
	int res = 0, vt = 0, cnt = 0;
	for(int i=0; i < s.length()-1; i++) {
		if(s[i] == '[') {
			v.push_back(i);
		}
	}
	for(int i=0; i < s.length()-1; i++) {
		if(s[i] == '[') {
			cnt += 1;
			vt += 1;
		} else
			cnt += -1;
		if(cnt < 0) {
			res += v[vt] - i;
			swap(s[v[vt]], s[i]);
			cnt = 1;
			vt++;
		}
	}
	cout << res << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> s;
		xuli();
	}
	return 0;
}
