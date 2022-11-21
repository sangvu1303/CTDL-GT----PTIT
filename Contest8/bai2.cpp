#include <bits/stdc++.h>

using namespace std;

int t;
queue <int> q;

void xuli() {
    string s; cin >> s;
    if(s == "PUSH") {
        int x; cin >> x;
        q.push(x);
    } else if(s == "PRINTFRONT") {
        if(!q.empty()) cout << q.front() << "\n";
        else cout << "NONE" << "\n"; 
    } else if(s == "POP") {
        if(!q.empty()) q.pop();
    }
}

int main() {
    cin >> t;
    while (t--) {
        xuli();
    }
    return 0;
}