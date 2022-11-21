#include<bits/stdc++.h>
#define max 1000

using namespace std;

int main()
{
	int t;
	cin>>t;
	int n,k;
	int a[max];
	while(t--)
	{
		cin>>n>>k;
		
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
		}
		int b=k-1;
		while(b>=0)
		{
			if(a[b]<=(n-k+b))
			{
				a[b]=a[b]+1;
				for(int i=b+1;i<k;i++)
				{
					a[i]=a[i-1] +1;
				}
				break;
			}
			b--;
		}
		if(b<0)
		{
			for(int i=1;i<=k;i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else
		{
			for(int i=0;i<k;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
