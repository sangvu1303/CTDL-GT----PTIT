#include <bits/stdc++.h>

using namespace std;

void xuli() {
    int n; cin >> n;
    for(int i=1; i<= n; i++) {
        string binary;
        int x = i;
        while(x != 0) {
            binary += x%2 + '0';
            x >>= 1;
        }
        reverse(binary.begin(), binary.end());
        cout << binary << ' ';
    }
    cout << "\n";
}


int main() {
    int t; cin >> t;
    while(t--) {
        xuli();
    }
    return 0;
}