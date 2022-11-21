#include <bits/stdc++.h>

using namespace std;

int t, n;

void xuli() {
    queue <int> q;
    cin >> n;
    while(n--) {
        int lc; cin >> lc;
        switch (lc) {
            case 1: cout << q.size() << "\n"; break;
            case 2: cout << (q.empty() ? "YES": "NO") << "\n"; break;
            case 3: int x; cin >> x; q.push(x); break;
            case 4 : if(!q.empty()) q.pop(); break;
            case 5 : cout << (q.empty()?-1:q.front()) << "\n"; break;
            case 6 : cout << (q.empty()?-1:q.back()) << "\n"; break;
        }
    }
}

int main() {
    cin >> t;
    while (t--) {
        xuli();
    }
    return 0;
}