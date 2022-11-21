#include<bits/stdc++.h>

using namespace std;

int n, m;
bool flag = false;
vector<int> a[100];
int vis[100];

void nhap() {
	cin >> n >> m;
	flag = false;
	for(int i=1; i<=100;i++) a[i].clear();
	memset(vis,0,sizeof(vis));
	for(int i=1; i<=m; i++) {
		int u,v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
}

void DFS(int u, int cnt) {
	if(cnt == n) flag = true;
	if(flag == true) return;
	for(auto v: a[u]) {
		if(vis[v] == 0) {
			vis[v] = 1;
			DFS(v, cnt+1);
			vis[v] = 0;
		}
	}
}

void xuli() {
	for(int i = 1; i <= n; i++){
        vis[i] = 1;
        DFS(i,1);
        vis[i] = 0;
    }
    cout << flag << '\n';
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		nhap();
		xuli();
	}
	return 0;
}
