#include <bits/stdc++.h>

using namespace std;

int t, S[1001][1001];
string s1, s2;

int xuli(string s1, string s2) {
	int m=s1.length(), n=s2.length();
	for(int i=0;i<=m;i++) S[i][0]=0;
	for(int j=0;j<=n;j++) S[0][j]=0;
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(s1[i-1]==s2[j-1])
				S[i][j]=S[i-1][j-1]+1;
			else
				S[i][j]=max(S[i-1][j],S[i][j-1]);
		}
	}
	
	return S[m][n];
	
}

int main() {
	cin >> t;
	while(t--) {
		cin >> s1;
		cin >> s2;
		cout << xuli(s1, s2) << endl;
	}
	return 0;
}
