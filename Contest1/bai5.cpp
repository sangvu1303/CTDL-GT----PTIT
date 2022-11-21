#include<bits/stdc++.h>
#define TRUE 1
#define FALSE 0
#define max 1000
using namespace std;

int ok=TRUE,n,k,a[max];
void nhap(void)
{
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		a[i]=i;
	}
}
void result(void)
{
	for(int i=1;i<=k;i++)
	{
		cout<<a[i];
	}
	cout<<" ";
}
void next(void)
{
	int i=k;
	while(i>0&&a[i]==n-k+i) i--;
	if(i>0)
	{
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++)
		{
			a[j]=a[i]+j-i;
		}
	}
	else ok=FALSE;
}
int main()
{
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
