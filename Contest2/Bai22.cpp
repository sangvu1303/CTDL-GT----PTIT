#include <bits/stdc++.h>
#include <string>

using namespace std;

int t, n, ok=0, k=0;
int arr[100][100];
string kq;

void xuat(int k) {
	for(int i=0; i<k; i++) {
		cout << kq[i];
	}
	cout << " ";
}

void quaylui(int i, int j, int k) {
	if(i==n-1 && j==n-1) {
		ok = 1;
		xuat(k);
		return;
	}
	if(i<n && arr[i+1][j] == 1) {
		kq[k] = 'D';
		quaylui(i+1, j, k+1);
	}
	if(j<n && arr[i][j+1] == 1) {
		kq[k] = 'R';
		quaylui(i, j+1, k+1);
	}
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n;i++) {
			for(int j=0; j<n;j++) {
				cin >> arr[i][j];
			}
		}
		if(arr[0][0]==0 || arr[n-1][n-1]==0) {
			cout << "-1" << "\n";
		}else {
			quaylui(0, 0, k);
			if(ok==0) {
				cout << "-1";
			}
			cout << endl;	
		}
	}
	return 0;
}
