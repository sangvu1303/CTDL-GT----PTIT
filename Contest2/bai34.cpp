#include <bits/stdc++.h>

using namespace std;

int t, arr[10][10], b[11], res;
int n=8;
bool row[11], col[11], dld[22], dlu[22];

void backtrack(int i) {
	for(int j=0; j<n;j++) {
		if(!row[j] && !col[j] && !dld[i-j+n-1] && !dlu[i+j]) {
			b[i] = j;
			row[j] = col[j] = dlu[i+j] = dld[i-j+n-1] = true;
			if(i==n-1) {
				int sum=0;
				for(int l=0; l<8;l++) {
					sum += arr[l][b[l]];
				}
				res = max(res, sum);
				
			} else backtrack(i+1);
			row[j] = col[j] = dlu[i+j] = dld[i-j+n-1] = false;
		}
	}
}

int main() {
	cin >> t;
	while(t--) {
		for(int i=0; i<n;i++) {
			for(int j=0; j<n;j++) {
				cin >> arr[i][j];
			}
		}
		for(int i=0; i<11;i++) {
			row[i]=col[i]=false;
		}
		for(int i=0; i<22;i++) {
			dld[i]=dlu[i]=false;
		}
		res=0;
		backtrack(0);
		cout << res << "\n";	
	}
	return 0;
}
