#include <bits/stdc++.h>

using namespace std;

int n, kt=true;

void sinh(char arr[], int n) {
	int i = n;
	while(arr[i]=='B' && i > 0) {
		arr[i] = 'A';
		i--;
	}
	if(i==0) kt=false;
	if(i > 0) {
		arr[i] = 'B';
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		char arr[n];
		for(int i=1; i<=n; i++) {
			arr[i] = 'A';
		}
		while(kt) {
			for(int i=1; i<=n;i++) {
				cout << arr[i];
			}
			cout << " ";
			sinh(arr, n);	
		}
		kt = true;
		cout << endl;
	}
	return 0;
}
