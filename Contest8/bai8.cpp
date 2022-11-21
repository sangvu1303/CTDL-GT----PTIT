#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int t, N;

int mod(string t, int N) {
    int r = 0; 
    for (int i = 0; i < t.length(); i++) { 
        r = r * 10 + (t[i] - '0'); 
        r %= N; 
    } 
    return r;
}

string xuli(int N) {
    queue<string> q; 
    set<int> visit; 
  
    string t = "1"; 
    q.push(t); 
    while (!q.empty()) { 
        t = q.front(); q.pop(); 
        int rem = mod(t, N); 
        if (rem == 0) 
            return t;
        else if(visit.find(rem) == visit.end()) { 
            visit.insert(rem); 
            q.push(t + "0"); 
            q.push(t + "1"); 
        } 
    } 
}

int main() {
    cin >> t;
    while(t--) {
        cin >> N;
        cout << xuli(N) << "\n";
    }
    return 0;
}