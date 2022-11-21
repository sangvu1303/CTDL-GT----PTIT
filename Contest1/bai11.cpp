#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		string gray, nhiphan;
		cin >> gray;
		nhiphan = gray[0]; // gan gia tri khoi tao cho day nhi phan la gia tri dau cua gray
		for(int i=0; i < gray.length()-1; i++) { // lap het day gray
			if(nhiphan[i] == gray[i+1]) // neu nhiphan[i] == gray[i+1] thi cong them 0
				nhiphan = nhiphan + '0';
			else
				nhiphan = nhiphan + '1'; // neu khong thi se cong them 1
		}
		
		cout << nhiphan << endl;
	}
	return 0;
}
