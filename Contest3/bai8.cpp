#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long int T;
	cin>>T;
	while(T--){
		long int dem=0;
		long int n,arrStart[1000],arrFinish[1000];
		vector<long int> saveLocation;
		cin>>n;
		
		for(long int i=0;i<n;i++){
			cin>>arrStart[i];
		}
		for(long int i=0;i<n;i++){
			cin>>arrFinish[i];
		}
		
		for(long int i=0;i<n-1;i++){
			for(long int j=i+1;j<n;j++){
				if(arrFinish[i]>arrFinish[j]){
					swap(arrFinish[i],arrFinish[j]);
					swap(arrStart[i],arrStart[j]);
				}
			}
		}
		
		
		saveLocation.push_back(0);
		int j=0;
		
		for(long int i=1;i<n;i++){
			
			if(arrStart[i]>=arrFinish[saveLocation[j]]){
				saveLocation.push_back(i);
				if(j<n)
					j++;
			}
		}
		
//		for(long i=0;i<saveLocation.size();i++){
//			cout<<saveLocation[i];
//		}
//		cout<<endl;
		cout<<saveLocation.size()<<endl;
	}
	
	return 0;
}
