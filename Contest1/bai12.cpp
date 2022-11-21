#include<bits/stdc++.h>
#define max 1000
using namespace std;
int n,k,a[max];
void result(void)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)
		dem++;
	}
	if(dem==k)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
	
}
void next(int i)
{
	int dem=0;
	for(int j=0;j<=1;j++)
	{
		a[i]=j;
		
		if(i==n)
		{
			result();
		}
		else
		{
			next(i+1);
		}
	}
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		next(1);
		
	}
	return 0;
}
