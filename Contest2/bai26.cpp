#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		string s;
		int k;
		cin >> k;
		cin >> s;
		int n = s.size();
		for (int i=0; i < n; i++) {
			char max = s[n-1];
			int index = n - 1;
			for (int j = n-1; j > i && k > 0; j--) {
				if (max < s[j]) {
					max = s[j];
					index = j;
				}
			}
			if (max > s[i] && k > 0) {
				swap(s[i], s[index]);
				k--;
			}
		}
		cout << s << endl;
	}
	return 0;
}
