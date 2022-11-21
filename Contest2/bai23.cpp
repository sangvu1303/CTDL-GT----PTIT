#include <bits/stdc++.h>
#include <string>

using namespace std;

int t, n, k=0;
int arr[100][100], ok;
string kq;

void xuat(int k) {
	for(int i=0; i<k; i++) {
		cout << kq[i];
	}
	cout << " ";
}

void quaylui(int i, int j, int k) {
	for(int t=0; t < 4; t++) {
		if(i==n && j==n) {
			ok = 1;
			xuat(k);
			return;
		}
		if(i>0 && i <=n && j > 0 && j <=n && arr[i+1][j] ) {
			kq[k] = 'D';
			quaylui(i+1, j, k+1);
			kq[k] = 'D';
		}
		if(i>0 && i <=n && j > 0 && j <=n && arr[i][j-1] ) {
			kq[k] = 'L';
			quaylui(i, j-1, k+1);
			kq[k] = 'L';
		}
		if(i>0 && i <=n && j > 0 && j <=n && arr[i][j+1] ) {
			kq[k] = 'R';
			quaylui(i, j+1, k+1);
			kq[k] = 'R';
		}
		if(i>0 && i <=n && j > 0 && j <=n && arr[i-1][j] ) {
			kq[k] = 'U';
			quaylui(i-1, j, k+1);
			kq[k] = 'U';
		}
		ok = 0;
	}
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=1; i<=n;i++) {
			for(int j=1; j<=n;j++) {
				cin >> arr[i][j];
			}
		}
		if(arr[n-1][n-1] == 0 || arr[0][0] == 0)
			cout << "-1";
		quaylui(1, 1, k);
		cout << endl;
	}
	return 0;
}
