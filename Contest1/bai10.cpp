#include<iostream>
#include<string>

using namespace std;
int main() {
	int t;
	cin>>t;
	cin.ignore();
	
	while(t--) {
		string s;
		string a;
		getline(cin,s);
		int n=s.length();
		for(int i=0;i<n;i++) {
			a+='0';
		}
		for(int i=n;i>=1;i--) {
			a[0]=s[0];
			if(s[i]!=s[i-1]) {
				a[i]='1';
			}
			else {
				a[i]='0';
			}
		}
		cout<<a;
		cout<<endl;
	}
	return 0;
}
