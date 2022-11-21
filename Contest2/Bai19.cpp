#include <iostream>

using namespace std;

void sum(int arr[], int n) {
	int result[n];
	for(int i = 0; i < n-1; i++) {
		result[i] = arr[i] + arr[i+1];
	}
	cout << "[";
	for(int i = 0; i < n - 1; i++) {
		if (i < n-2) {
			cout << result[i] << " ";
		} else {
			cout << result[i] << "]" << endl;
		}
	}
	if (n>2) {
		sum(result, n-1);
	}
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		int arr[100];
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		if (n < 2 && n >= 1) {
			cout << "[";
			for(int i = 0; i < n; i++) {
				if (i <= n-2)
					cout << arr[i] << " ";
				else
					cout << arr[i] << "]" << endl;
			}
		} else {
			cout << "[";
			for(int i = 0; i < n; i++) {
				if (i <= n-2)
					cout << arr[i] << " ";
				else
					cout << arr[i] << "]" << endl;
			}
			sum(arr, n);	
		}
	}
}
