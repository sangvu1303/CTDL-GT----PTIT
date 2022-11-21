#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll t, n;
ll A[100000000],B[100000000];

int main(){
	cin>>t;
	while(t--){
		ll min=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
	
		for(int i=0;i<n;i++){
			cin>>B[i];
		}
		
		sort(A,A+n);
		sort(B,B+n,greater<int>());
		
		for(int i=0;i<n;i++){
			min+=(A[i]*B[i]);
		}

		cout<<min<<endl;
	}
	
}
