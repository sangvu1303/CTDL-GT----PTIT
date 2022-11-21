#include<bits/stdc++.h>
#define ll long long

using namespace std;

vector < ll > v;
vector < ll > pw;
int t;
ll n,l,r;

ll power(ll a, ll b) {
    if (b == 0) 
		return 1;
    if (b == 1) 
		return a;
    ll p = power(a, b/2); // de quy tai day de quy ve 2^1
    if (b % 2 != 0) 
		return a * p * p;
    else 
		return p * p;
}
 
void xuli(){
    while (n) {
        v.push_back(n);
        n /= 2; // Chia doi so n de tim ra day 1 0 1 1 0 ...
    }
    int k = v.size() - 1;
    int dem = 0;
    for (ll i = l ; i <= r; i++) {
        if (i % 2 != 0)
			dem++; // Neu i le thi dem tang len 1
        else {
            ll val = i; // val chan
            while (val & (val - 1)) { // tra ve gia tri 1 khi ca 2 cung dung
                int x = upper_bound(pw.begin(), pw.end(), val) - pw.begin() - 1; // Tim ra vi tri dau tien cua val
                val -= pw[x];
            }
            dem += v[k - (lower_bound(pw.begin(), pw.end(), val) - pw.begin())] & 1; // dem duoc tang len 1
        }   
    }
    cout << dem << '\n';
}

int main() {
    for (int i = 0 ; i < 50; i++) 
		pw.push_back(power(2, i)); // day cac gia tri mu vao vector
    cin >> t;
    while(t--) {
    	cin >> n >> l >> r;
    	v.clear();
    	xuli();
	}
    return 0;
}
