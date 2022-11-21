#include<bits/stdc++.h>

using namespace std; 

long long int binarySearch(long long arr[], long long n, long long x) {
	
  long long int r = n - 1; 
  long long int l = 0; 
  
  while (r >= l) {
    long long int mid = l + (r - l) / 2; 
 
    if (arr[mid] == x)
      return mid;
 
   
    if (arr[mid] > x)
      r = mid - 1;
   
    if (arr[mid] < x)
      l = mid + 1;
  }
 
  return -1;
}
 
int main() {
	
	int t;
	cin>>t;
	while(t--){
		long long arr[100000],n,x;
	  
		cin>>n>>x;
		  
		for(long long int i=0;i<n;i++){
		  	cin>>arr[i];
		}
		  
		int result = binarySearch(arr, n, x);
		if (result == -1)
		    cout<<"NO"<<endl;
		else{
		  	cout<<result + 1<<endl;
		}
	}
	    
	return 0;
}
