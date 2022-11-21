#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int a[100],n,sum,b[100],k,stop;

void xuat() {
	sum=0;
	
	for(int i = 1; i <= n; i++){
		sum += a[i]*b[i];
	}
	
	if(sum == k) {
		stop = 1;
		int x = 0;
		cout << "[";
		for(int i = 1; i <= n ;i++) {
			if(a[i] == 1 && x == 1 ) 
				cout << " " << b[i];
			if(a[i] == 1 && x == 0 ) {
				cout << b[i];
				x = 1;
			}
		}
		cout << "] ";
	}
}

void quaylui(int i) {
	for(int j=1; j>=0; j--) {
		a[i]=j;
		if(i == n) {
			xuat();
		}
		else quaylui(i+1);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		stop = 0;
		cin >> n >> k;
		for(int i=1; i<=n; i++) 
			cin >> b[i];
		sort(b+1,b+n+1);
		quaylui(1);
		if(stop==0) 
			cout << "-1";
		cout << endl;
	}
}
