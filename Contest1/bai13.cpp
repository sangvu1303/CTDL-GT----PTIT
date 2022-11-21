#include <iostream>

using namespace std;

int n, k, count = 0;
bool ok = false;
char a[100];
string s[100000];

void init() {
	for(int i=1; i <= n; i++) {
		a[i] = 'A';
	}	
}

bool kt() {
	int dem = 0, t=1;
	for(int i = 1; i < n; i++) {
		if(a[i] == 'A' && a[i+1] == 'A')
			t++;
			if(t>=k)
				dem++;
		else
			t = 1;
	}
	if(dem = 1) return true;
	else return false;
}

void dem() {
	if(kt()) {
		s[count] = "";
		for(int i=1; i <=n; i++) {
			s[count] += a[i];
		}
		cout++;
	}
}

void sinh() {
	int i = n;
	while(a[i] == 'B') {
		a[i] = 'A';
		i--;
	}
	if (i ==0) {
		ok = true;
	} else {
		a[i] = 'B';
	}
}

int main() {
	cin >> n >> k;
	init();
	while(!ok) {
		sinh();
		dem();
	}
	cout << count << endl;
	for(int i=1; i<=n; i++) {
		cout << s[i] << endl;
	}
	return 0;
}
