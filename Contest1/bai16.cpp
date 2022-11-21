#include <bits/stdc++.h>

using namespace std;

int n, k;
int res;
int arr[30][30];
int x[30];
bool ok[30];
vector<int> Res;

void quaylui(int i) {
	for(int j=1; j<=n;j++) {
		if(!ok[j]) { // neu ma con dung thi con chay
			x[i] = j;
			ok[j] = true;
			if(i==n) { // day la neu da duyet het hang cua 1 ma tran
				res = 0;
				for(int l=1; l <=n; l++) { // duyet tiep het n de loi ra ket qua
					res += arr[l][x[l]];	
				}
				if(res == k) {
					for(int l=1;l<=n;l++)
						Res.push_back(x[l]); // x[l] chinh la vi tri tren hang goi la cot
				}	
			}
			else quaylui(i+1); // duyet tiep cot tiep theo tren hang
			ok[j] = false;
		}
	}
}

int main() {
	cin >> n >> k;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n;j++) {
			cin >> arr[i][j]; // nhap mang
		}
	}
	quaylui(1);
	
	cout << Res.size() / n;
	for(int i=0; i<Res.size();i++) {
		if(i%n ==0){
			cout << "\n";
		}
		cout << Res[i] << " ";
	}
	return 0;
}
