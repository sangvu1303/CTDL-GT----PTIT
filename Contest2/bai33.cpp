#include <bits/stdc++.h>

using namespace std;

int n, dem=0;
bool row[11], col[11], dld[22], dlu[22];

void backtrack(int i) {
	for(int j=0; j<n;j++) {
		if(!row[j] && !col[j] && !dld[i-j+n-1] && !dlu[i+j]) {
			row[j] = col[j] = dlu[i+j] = dld[i-j+n-1] = true;
			if(i==n-1) {
				dem++;
			} else backtrack(i+1);
			row[j] = col[j] = dlu[i+j] = dld[i-j+n-1] = false;
		}
	}
}

int main() {
	cin >> n;
	backtrack(0);
	cout << dem << "\n";
	return 0;
}
