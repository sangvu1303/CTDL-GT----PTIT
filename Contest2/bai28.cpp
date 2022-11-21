#include <bits/stdc++.h>

using namespace std;

int x, n;
int arr[100];
vector< vector< int > > res;

void xuat(int i, int sum, vector<int> v) { // i de lay ra vi tri khi cho them vao vector v
	if(sum > x) {
		return;
	}
	if(sum == x) {
		res.push_back(v);
		return;
	}
	
	for(int j = i; j <=n; j++) {
		if(sum + arr[j] <= x) {
			v.push_back(arr[j]);
			xuat(j, sum + arr[j], v); // j vi no co the trung duoc ket qua
			v.pop_back(); // su dung quay lui luon phai xoa di buon neu sai
		}
	}
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		cin >> n >> x;
		for(int i =1; i <= n; i++) {
			cin >> arr[i];
		}
		sort(arr+1, arr+n+1); // sap xep lai mang
		vector<int> v; v.clear(); // vector v de luu ket qua
		res.clear(); // res se luu lai vector
		xuat(1, 0, v); // de quy // de sum = 0 luon
		if(res.size() ==0) { // in ra -1 neu ket qua rong
			cout << -1 << endl;
			continue;
		}
		for(int i=0; i< res.size(); i++) { // in theo dieu kien de bai
			cout << "[";
			for(int j=0; j < res[i].size()-1; j++)
				cout << res[i][j] << " ";
			cout << res[i][res[i].size()-1] << "] "; 
		}
		cout << "\n";
	}
}
