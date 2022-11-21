#include <bits/stdc++.h> 
#include <iostream> 
using namespace std; 

void findNumberSmallest(long int d, long int s) 
{ 
    if (s > 9*d) 
    { 
        cout <<-1; 
        return ; 
    } 
  
    long int res[d]; 
  
    s -= 1; 
  
    for (int i=d-1; i>0; i--) 
    { 
        if (s > 9) 
        { 
            res[i] = 9; 
            s -= 9; 
        } 
        else
        { 
            res[i] = s; 
            s = 0; 
        } 
    } 
  
    res[0] = s + 1;  
  
    for (int i=0; i<d; i++) 
    	cout<<res[i];
} 
  
int main() 
{ 
	long int T;
	cin>>T;
	while(T--){
		long int s,d;
		cin>>s>>d;
		
	    findNumberSmallest(d, s); 
	    cout<<endl;
	}

	return 0;
    
} 
