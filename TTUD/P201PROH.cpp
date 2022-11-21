#include <bits/stdc++.h>

using namespace std;

int t, a, b;

void xuli() {
    int fl = 1;
    if(a <= 3 && a != b && (a!=2 && b != 3)) {
        fl = 0;
    }
    if(fl == 0) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {
    cin >> t;
    while(t--) {
        cin >> a >> b;
        xuli();
    }
    return 0;
}