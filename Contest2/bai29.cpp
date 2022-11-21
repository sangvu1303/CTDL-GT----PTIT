#include <bits/stdc++.h>

using namespace std;

int t, m, n;
int arr[102][102];
int dem = 0;

void quaylui(int i, int j) {
	if(i==m-1 && j==n-1) {
		dem++;
		return;
	}
	if(i+1 <= m-1 && j <= n-1) {
		quaylui(i+1, j);
	}
	if(j+1 <= n-1 && i <= m-1) {
		quaylui(i, j+1);
	}
}

int main() {
	cin >> t;
	while(t--) {
		cin >> m >> n;
		for(int i=0; i<m;i++) {
			for(int j=0;j<n;j++) {
				cin >> arr[i][j];
			}
		}
		dem = 0;
		quaylui(0,0);
		cout << dem << endl;	
	}
	return 0;
}
