#include <bits/stdc++.h>

using namespace std;

const int M = 1e6+1;
int t, n, a[M];

int partition(int arr[], int low, int hight) {
	int pivot = arr[hight];
	int i = (low)-1;
	for(int j=low; j<=hight-1; j++) {
		if(arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[hight]);
	return i+1;
}

quickSort(int arr[], int low, int hight) {
	if(low < hight) {
		int pi = partition(arr, low, hight);
		quickSort(arr, low, pi-1);
		quickSort(arr, pi+1, hight);
	}
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		quickSort(a, 0, n-1);
		for(int i=0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
