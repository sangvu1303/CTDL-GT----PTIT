#include <bits/stdc++.h>

using namespace std;

bool ok[300];
vector<int> a; // khoi tao vector de push cac so vao
vector< vector<int> > res; // khoi tao vector luu ket qua
int n, p, s, vt; // vt la vt dang chuan bi quay lui sau khi sang

void loc() { // phuong phap sang so nguyen to
	for(int i=2; i <= 200; i++) {
		if(!ok[i]) { // neu con sai thi thuc hien
			a.push_back(i); // push cac so nguyen to vao vector a
			for(int j = i*i; j <= 200; j+=i)
				ok[j] = true;
		}
	}
}

void init() {
	cin >> n >> p >> s;
	vt = lower_bound(a.begin(), a.end(), p)-a.begin(); // diem bat dau de quay lui la tu p
	for(int i=0; i < 300; i++) {
		ok[i] = false;
	}
	res.clear();
}

void quaylui(int i, vector<int> v, int sum) {
	if (sum > s) {
		return;
	}
	
	if (sum == s && v.size() == n) {
		res.push_back(v); // sau khi ghi ra vector v thi ghi lai vao res
		return;
	}
	
	for(int j=i; j < a.size(); j++) { // duyet lan luot trong mang nguyen to
		if (ok[j]==false && sum + a[j] <= s && v.size() < n) { // neu vt van con tiep va tong chua bang va so chu so < n
			v.push_back(a[j]);
			ok[j] = true; // de true de thoat khoi de quy
			quaylui(j+1, v, sum+a[j]); // de quy lai
			v.pop_back(); // thuat toan quay lui thi xoa lai buoc truoc de duyet tiep
			ok[j] = false; // chinh lai dieu kien de quay lui
		}
	}
}

void Res() {
	cout << res.size() << "\n";
	for(int i=0; i < res.size();i++) {
		for(int j=0; j < res[i].size();j++) {
			cout << res[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() {
	loc(); // loc nguyen to
	int T;
	cin >> T;
	int arr[100];
	while(T--) {
		init();
		vector<int> v;
		v.clear(); // tao ra vector v de luu cac so nguyen to khi sum = s
		quaylui(vt, v, 0); // quay lui
		Res();
	}
	return 0;
}
