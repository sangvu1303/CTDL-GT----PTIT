#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MOD = 119 << 23 | 1;

int inv(int a) {
    int r = 1, t = a, k = MOD - 2;
    while (k) {
        if (k & 1) r = (ll) r * t % MOD;
        t = (ll) t * t % MOD;
        k >>= 1;
    }
    return r;
}

int main() {
    int n; 
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i], p[i] = (ll) p[i] * inv(100) % MOD;
    int a = 1, b = 0;
    for (int i = 0; i < n; i++) {
        a = (ll) a * inv(p[i]) % MOD;
        b = (ll) b * inv(p[i]) % MOD;
        a = (a + (ll) (p[i] - 1) * inv(p[i])) % MOD;
        b = (b - inv(p[i]) + MOD) % MOD;
    }
    cout <<  (ll) (MOD - b) * inv(a) % MOD << "\n";
    return 0;
}
