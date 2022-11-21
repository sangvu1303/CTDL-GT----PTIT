#include <bits/stdc++.h>

using namespace std;

void tien(int arr[], int money, int n) {
	int count = 0;
	for(int i = n-1; i > 0; i--)
		if(money >= arr[i]) {
			count += money/arr[i];
			money %= arr[i];
		}
	cout << count;
}

int main() {
	int n, s;
	cin >> n >> s;
	int a[n+1];
	for(int i=1; i <=n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	tien(a, s, n);
	return 0;
}
