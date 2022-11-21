#include<bits/stdc++.h>
using namespace std;
int N,S,M;
void survive(){
	cin>>N>>S>>M;
	if((N*6)<(M*7)&&S>6||M>N){
		cout<<"-1";
		cout<<endl;
	}else{
		int min=(M*S)/N;
		if((M*S)%N!=0){
			min++;
		}
		cout<<min;
		cout<<endl;
	}
}

int main(void){
	int t;
	cin>>t;
	while(t>0){
		t--;
		survive();
	}
}
