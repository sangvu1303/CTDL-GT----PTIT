#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAX_CHAR = 26;
int t, n;
string s;

void xuli() {
    priority_queue <int, vector<int>> q;
    cin >> n >> s;
    int l = s.length();
    int count[MAX_CHAR] = {0};
    for(int i=0; i<l; i++) {
        count[s[i] - 'A']++;
    }
    for(int i=0; i < MAX_CHAR; i++)
        if(count[i] != 0) q.push(count[i]);
    while(n != 0 && !q.empty()) {
        int temp = q.top(); q.pop();
        if(temp > 0) q.push(temp-1);
        n--;
    }
    ll result = 0;
    while(!q.empty()) {
        int temp = q.top();q.pop();
        result += 1LL*temp*temp;
    }

    cout << result << "\n";
}

int main() {
    cin >> t;
    while(t--) {
        xuli();
    }
    return 0;
}