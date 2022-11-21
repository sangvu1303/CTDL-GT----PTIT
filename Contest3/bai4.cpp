#include<bits/stdc++.h>
#define max 101
#define ll long long

using namespace std;

int t, n; 
ll arr[max];

void Sum() {
	sort(arr,arr+n);
	ll num1=0;
	ll num2=0;
	for(ll i=0;i<n;i++) { //lap het mang de nhap vao so num1 neu i chan
		if(i%2==0) {
			num1=num1*10+arr[i];
		}
		else num2=num2*10+arr[i];
	}
	ll sum = num2+num1;
	cout << sum << "\n";
}
int main() {
	cin>>t;
	while(t--) {
		cin>>n;
		for(ll i=0;i<n;i++) cin>>arr[i];
	Sum();
	}
	return 0;
}
