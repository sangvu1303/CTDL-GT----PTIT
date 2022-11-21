#include<bits/stdc++.h>
#define TRUE 1
#define FALSE 0
#define max 1000
using namespace std;
int a[max],n,ok=TRUE,k;
void nhap(void)
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
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
	while(i>0&&a[i]>a[i+1]) i--;
	if(i>0)
	{
		k=n;
		while(a[i]>a[k]) k--;
		int tmp=a[i];a[i]=a[k];a[k]=tmp;
		int l=i+1,r=n;
		while(l<=r)
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
