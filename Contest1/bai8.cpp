#include<bits/stdc++.h>
#define max 11
#define TRUE 1
#define FALSE 0
using namespace std;
int n,a[max],ok=TRUE;
void nhap(void)
{
	cin>>n;
	int k=n;
	for(int i=1;i<=n;i++)
	{
		if(k>0)
		{
			a[i]=k--;
		}
	}
}
void result(void)
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	cout<<" ";
}
void next(void)
{
	int i=n-1;
	while(i>0&&a[i]<a[i+1]) i--;
	if(i>0)
	{
		int m=n;
		while(a[i]<a[m]) m--;
		int tmp=a[i];a[i]=a[m];a[m]=tmp;
		int l=i+1,r=n;
		while(l<r)
		{
			int tp=a[l];a[l]=a[r];a[r]=tp;
			l++;
			r--;
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
