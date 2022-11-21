#include<bits/stdc++.h>
#define max 1000
#define TRUE 1
#define FALSE 0
using namespace std;

int main()
{
	int t;
	cin>>t;
	int a[max];
	int n;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int b=n-1;
		while(b>0)
		{
			if(a[b-1]<a[b])
			{
				int k=n-1;
				while(a[b-1]>a[k]) k--;
				int t=a[b-1];a[b-1]=a[k];a[k]=t;
				break;
				
			}
			b--;
		}
		if(b<=0)
		{
			for(int i=1;i<=n;i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;// danh cho truong hop biggset vd : 5 4 3 2 1 
		}
		else
		{
			int l=b,r=n-1;
			while(l<=r)
			{
				int tmp=a[l];a[l]=a[r];a[r]=tmp;
				l++;
				r--;
			}
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		
		
	}
	return 0;
}
