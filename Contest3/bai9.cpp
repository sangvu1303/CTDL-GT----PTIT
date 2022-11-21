#include <bits/stdc++.h> 
using namespace std; 

int t, n;

struct job{
	int id,dl,pro;
};

job a[1000];

bool cmp(job a, job b){
	if(a.pro>b.pro) return true;
	return false;
}

void solve(){
	cin>>n;
	job a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].id>>a[i].dl>>a[i].pro;
}
		sort(a,a+n,cmp);
		int k=0,res=0;
		int b[1000]={0};
		for(int i=0;i<n;i++){
			while(b[a[i].dl]&&a[i].dl>0){
			a[i].dl--;
		}
			if(!b[a[i].dl]&&a[i].dl>0){
				b[a[i].dl]=1;
				res+=a[i].pro;
				k++;
			}
		}
		cout<<k<<' '<<res;
		cout<<endl;
	
}
int main(void){
	cin>>t;
	while(t>0){
		t--;
		solve();
	}
}
