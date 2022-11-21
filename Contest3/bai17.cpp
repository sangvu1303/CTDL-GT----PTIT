#include <bits/stdc++.h> 
using namespace std; 
int n;
string a;
int k;
int solve(){
	cin>>k;
	cin>>a;
	n=a.size();
	if(k>=n){
		return 0;
	}
	int b[26]={0};
	for(int i=0;i<n;i++)
		b[a[i]-'A']++;
		
	priority_queue<int> q;
	for(int i=0;i<26;i++)
		q.push(b[i]);

	for(int i=k;i>0;i--){
		int temp=q.top();
		q.pop();
		temp=temp-1;
		q.push(temp);		
	}
	
	int res=0;
	while(!q.empty()){
		int temp=q.top();
		res+=temp*temp;
		q.pop();
	}
	return res;
		
}
int main(){
	int t;
	cin>>t;
	while(t>0){
		t--;
		cout<<solve();
		cout<<endl;
	}
}
