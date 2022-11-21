#include <bits/stdc++.h>

using namespace std;

int minSum, maxSum;
int a, b;

void sum(int a, int b) {
	minSum = a+b;
	maxSum = a+b;
	int tmp = 0;
	while(a>0 || b>0) {
		if(a%10==6) {
			minSum -= pow(10, tmp);
		}
		if(a%10==5) {
			maxSum += pow(10, tmp);
		}
		if(b%10==6) {
			minSum -= pow(10, tmp);
		}
		if(b%10==5) {
			maxSum += pow(10, tmp);
		}
		a/=10;
		b/=10;
		tmp++;
	}
}

int main() {
	cin >> a >> b;
	sum(a, b);
	cout << minSum << " " << maxSum;
	return 0;
}
