#include <bits/stdc++.h>

using namespace std;

int t, n, k;
bool ok;
int arr[23], check[23];
int sum, count;

void quaylui(int vt, int temp) {
	if(temp==sum) {
		ok = true;
		return;
	}
	if(temp>sum) return;
	for(int i=vt; i<n;i++) {
		if(check[i]==0) {
			check[i]=1;
			quaylui(i+1, temp+arr[i]);
			if(ok) return;
			check[i]=0;
		}
	}
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n >> k;
		int sum = 0, count = 0;
		for(int i=0; i<n;i++) {
			check[i] = 0;
			cin >> arr[i];
		}
		for(int i=0; i<n; i++) {
			check[i] = 0;
			sum += arr[i];
		}
		if(sum%k>0) {
			cout <<"0\n";
			return 0;
		}
		sum /= k;
		for(int i=0;i<n;i++){
    		if(check[i] == 0){
	    		ok = false;
	    		quaylui(i,0);
	    		if(ok) count++;
			}
		}
		if(count >= k) cout<<"1\n";
		else cout<<"0\n";
	}
	return 0;
}
