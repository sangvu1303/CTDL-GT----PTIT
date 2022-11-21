#include <bits/stdc++.h>

using namespace std;

int n, a[1001], S[1001];

int xuli(int arr[], int n) {
	int i, j, result = 0;
	for(int i=0; i<n;i++) {
		S[i] = 1;
		for(j=0;j<i;j++){
			if(arr[j]<arr[i]){
				S[i] = max(S[i],S[j]+1);
			}
		}
		result = max(result,S[i]);
	}
	
	return result;
}

int main() {
	cin >> n;
	for(int i=0; i < n; i++) {
		cin >> a[i];
	}
	cout << xuli(a, n);
	return 0;
}
