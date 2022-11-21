#include <bits/stdc++.h>

using namespace std;

void timMax(string s, int k, string &max) { // dat bien max = s;
	int n = s.size();
	if (k == 0) { //neu so lan doi cho bang 0 thi dung
		return;
	}
	for(int i=0; i < n-1; i++) {
		for(int j = i+1; j < n; j++) { // xet mang 2 chieu de tim ra s[i] < s[j] xet ca cac so giong nhau
			if(s[i] < s[j]) {
				swap(s[i], s[j]); // doi cho 2 so do
				if(s.compare(max) > 0) // neu so sanh voi max lon hon thi thay max = s 
					max = s;
				timMax(s, k-1, max); // tiep tuc tim den khi k ==0
				swap(s[i], s[j]); // doi lai cho de xet tiep (quay lui)
			}
		}
	}
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		string s;
		int k;
		cin >> k;
		cin >> s;
		string max = s;
		timMax(s, k, max);
		cout << max << endl;
	return 0;
}
}
