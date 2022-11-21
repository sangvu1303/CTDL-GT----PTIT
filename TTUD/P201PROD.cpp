#include <bits/stdc++.h>

using namespace std;

int t, n;
vector<int> q;

void xuli() {
    int dem = 0, i =0;
    q.clear();
    while(i < n) {
        i+=4;
        dem++;
    }
    for(int i=0; i<n; i++) {
        if(i< n-dem) {
            q.push_back(9);
        } else if(i >= n-dem) {
            q.push_back(8);
        }
    }
    for(int i=0; i<n; i++) {
        cout << q[i];
    }
    cout << "\n";
}

int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        xuli();
    }
}