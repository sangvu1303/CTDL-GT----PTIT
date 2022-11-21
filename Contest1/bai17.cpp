#include <bits/stdc++.h>

using namespace std;

long long find(int number) {
	if(number==0) { //neu so can tim ra == 0 thi khoi tim
		return 0;
	} else {
		return (number % 2 + 10*find(number/2));
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int i = 1;
		while(1) {
			if(find(i)*9 % n == 0) { // neu so do chia het cho n(boi so)
				cout << find(i) * 9 << endl;
				break; // break thi nen de ngoac don
			}
			i++;
		}
	}
	return 0;
}
