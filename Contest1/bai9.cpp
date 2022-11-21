#include<bits/stdc++.h>
#define max 11
#define TRUE 1
#define FALSE 0

using namespace std;

int a[max],b[max],n, ok = TRUE;

void nhap(void) {
	cin>>n;
	for(int i=1;i<=n;i++) {
		a[i]=0;
	}
	
	for(int i=1;i<=n;i++) {
		b[i]=0;
	}
}

void result(void) {
	
	for(int i=n;i>=1;i--) {
		b[i]=a[i] xor a[i-1];
	}
	
	for(int i=1;i<=n;i++) {
		cout<<b[i];
	}
	cout<<" ";
}

void next(void) {
	int i=n;
	while(i>0&&a[i]!=0)
	{
		a[i]=0;
		i--;
	}
	if(i>0)
	{
		a[i]=1;
		
	}
	else ok=FALSE;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		nhap();
		while(ok)
		{
			result();
			next();
		}
		ok=TRUE;
		cout<<endl;
	}
	return 0;
}
