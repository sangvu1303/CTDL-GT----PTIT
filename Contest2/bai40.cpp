#include<bits/stdc++.h>

using namespace std;

int n, tmp=0;
int c[16][16]; // do n < 15 de luu mang 2 chieu
int x[16]; // mang de do duong di
int FOPT = 9999999; // Dat chi phi tren la vo cung
int cmin; // chi phi
bool visited[16]; // kiem tra xem da di qua tp nay chua

void timcMin() {
	cmin=c[1][1]; // gan chi chi phi nho nhat la o vi tri tp 1
	for(int i=1; i<=n; i++) {  // lap de xem chi phi o vi tri [i][j] < FOPT khong
		for(int j=1; j<=n; j++) {
			if(c[i][j]<cmin && cmin != 0)
				cmin = c[i][j];
		}
	}
}

void dichuyen(int i) {
	for(int j=2; j<=n; j++) { // lua chon cac duong di tu vi tri thu 2
		if(!visited[j]) { // neu chua den vi tri do thi con chay
			x[i] = j;
			visited[j] = true;
			// Su dung quay lui o doan nay
			tmp += c[x[i-1]][x[i]];
			if(i==n) { // neu no den vi tri cuoi
				if(tmp+c[x[n]][1] < FOPT) // neu chi phi tong van nho hon thi chon
					FOPT = tmp+c[x[n]][1];
			}
			else
				if(tmp + cmin*(n-i+1) < FOPT) // nguoc lai thi tiep tuc lap lai
					dichuyen(i+1);
			visited[j] = false; // gan cho visited bang false de tiep tuc chay
			tmp -= c[x[i-1]][x[i]]; // chi phi se tru di luc nay da cong vao;
		}
	}
}

int main() {
	cin >> n;
	for(int i=1; i <= n; i++) {
		for(int j=1; j <= n; j++) {
			cin >> c[i][j];
		}
	}
	timcMin();
	x[1] = 1;
	dichuyen(2);
	cout << FOPT << endl;
	return 0;
}
