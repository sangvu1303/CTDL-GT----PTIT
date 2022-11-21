#include <bits/stdc++.h>

using namespace std;

int t;
deque <int> q;

void xuli() {
    string s; cin >> s;
    if(s == "PUSHFRONT") {
        int x; cin >> x;
        q.push_front(x);
    } else if(s == "PRINTFRONT") {
        if(!q.empty()) cout << q.front() << '\n';
        else cout << "NONE" << '\n';
    } else if(s == "POPFRONT") {
        if(!q.empty()) q.pop_front();
    } else if(s =="PUSHBACK") {
        int x; cin >> x;
        q.push_back(x);
    } else if(s == "PRINTBACK") {
        if(!q.empty()) cout << q.back() << '\n';
        else cout << "NONE" << '\n';
    } else if(s == "POPBACK") {
        if(!q.empty()) q.pop_back();
    }
}

int main() {
    cin >> t;
    while(t--) {
        xuli();
    }
    return 0;
}