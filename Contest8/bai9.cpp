#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int test;
ll s, t;

void xuli() {
    map<ll,int> vis;
    queue <pair<ll,int>> q;
    q.push({s,0}); vis[s] = 1;
    while(!q.empty()){
        auto x = q.front(); q.pop();
        if(x.first == t){
            cout << x.second << '\n';
            return;
        }
        if(vis[x.first-1] == 0){
            vis[x.first-1] = 1;
            q.push({x.first-1,x.second+1});
        }
        if(vis[x.first*2] == 0 && x.first < t){
            vis[x.first*2] = 1;
            q.push({x.first*2,x.second+1});
        }
    }
}

int main() {
    cin >> test;
    while(test--) {
        cin >> s >> t;
        xuli();
    }
    return 0;
}