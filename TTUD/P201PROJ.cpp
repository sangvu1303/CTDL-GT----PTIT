#include<bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int xuli(ll b, string bs) {
	string a = to_string(b + 1);
	if(bs.length() < a.length()){
		return bs.length();
	} else {
		return bs.length() - 1;
	}
}
int main() {
	ll t;
	cin >> t;
	while(t --) {
		ll a;
		string b;
		cin >> a >> b;
		ll ib = stoi(b); // convert string b to long long
		cout << a * xuli(ib, b) << endl;
	}
	return 0;
}
