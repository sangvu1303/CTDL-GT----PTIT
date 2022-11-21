#include <bits/stdc++.h>
#include <string>

using namespace std;

int t;
string s;

int max (int x, int y) { return (x > y)? x : y; }

int lsp(string a) {
	int n = a.length();
	int i, j, cl;
	int L[n][n];
	
	for(i=0; i < n; i++) {
		L[i][j] = 1;
	}
	
	for (cl=2; cl<=n; cl++)  { 
        for (i=0; i<n-cl+1; i++) { 
            j = i+cl-1; 
            if (a[i] == a[j] && cl == 2) 
               L[i][j] = 2; 
            else if (a[i] == a[j]) 
               L[i][j] = L[i+1][j-1] + 2; 
            else
               L[i][j] = max(L[i][j-1], L[i+1][j]);
        }
    }
    return L[0][n-1];	
}

void xuli() {
	cout << lsp(s) << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		cin >> s;
		xuli();
	}
	return 0;
}
