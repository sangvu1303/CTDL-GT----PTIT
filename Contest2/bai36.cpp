#include <bits/stdc++.h>

using namespace std;

int arr[5], vt[10];
bool ok, p[10];
vector<vector < int > > res;
vector< int > v;

void sinhDau() { // sinh ra cac dau vao trong vector v
	for(int i=0; i<3; i++) {
		v.push_back(i);
		if(v.size() == 4)
			res.push_back(v); // ghi lai cac chuoi dau do vao trong vector res
		else sinhDau();
		v.pop_back();
	}
}

bool check() {
	for(int i=0; i<res.size();i++) { // lap tren cac truong hop cua dau
		int s = arr[vt[0]]; // gan gia tri sum = 0;
		for(int j=0;j<4;j++) { // lap qua cac vi tri trong day co 4 vi tri
			if(res[i][j] == 1)
				s += arr[vt[j+1]];
			if(res[i][j] == 2)
				s += arr[vt[j+1]];
			if(res[i][j] == 3)
				s += arr[vt[j+1]];
		}
		if(s==23) // neu tong bang 23 thi stop
			return true;
	}
	return false; // tra lai false de xet tiep
}

void quaylui(int i) {
	if(ok) return;
	for(int j=0;j<5;j++) {
		if(!p[j]) {
			vt[i] = j;
			p[j] = true;
			if(i==4) {
				if(check()) {
					ok = true;
					return;
				}
			}
			else quaylui(i+1);
			p[j] = false;
		}
	}
}

int main() {
	int t;
	sinhDau();
	cin >> t;
	while(t--) {
		for(int i=0; i<5;i++) {
			cin >> arr[i];
		}
		for(int i=0; i<10;i++) {
			vt[i] = 0;
			p[i] = false;
		}
		ok = false; v.clear();
		quaylui(0);
		if(ok) cout << "YES";
		else cout << "NO";
		cout << "\n";
	}
	return 0;
}
