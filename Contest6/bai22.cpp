#include <bits/stdc++.h>

using namespace std;

const int M = 1e6+1;
int t, n, X, a[M];

int binarySearch(int arr[], int l, int r, int x) {
	if (r >= l) {
		int mid = l + (r-l) / 2;
		if(arr[mid] == x)
			return mid;
		if(arr[mid] > x)
			return binarySearch(arr, l, mid -1, x);
		return binarySearch(arr, mid+1, r, x);
	}
	return -1;
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n >> X;
		for(int i=0; i<n;i++) {
			cin >> a[i];
		}
		int result = binarySearch(a, 0, n-1, X);
		if (result == -1) 
			cout << "-1" << "\n";
		else 
			cout << "1" << "\n";
	}
	return 0;
}
