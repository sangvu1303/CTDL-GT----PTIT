#include<bits/stdc++.h>
#include<queue>
#define MAX 1000000007
 
using namespace std;
typedef long long ll;
ll minCost(ll a[],ll n)
{
	priority_queue<ll,vector<ll>,greater<ll> > pq(a,a+n);
 
	ll cost=0;
	while(pq.size()>1)
	{
		ll first=pq.top();
		pq.pop();
		ll second=pq.top();
		pq.pop();
		ll tmp = (first+second) % MAX;
		cost= (cost+tmp) % MAX;
		pq.push(tmp);
	}
	return cost;
}
int main()
{
	ll *a,n;
	cin>>n;
	a=new ll[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<minCost(a,n);
	return 0;
 
}
