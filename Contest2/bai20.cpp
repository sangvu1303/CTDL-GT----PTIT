#include <bits/stdc++.h>

using namespace std;
int t,n;
vector<int> a;
void nhap(){
	cin>>n;
	a.clear();
    for (int j=0; j<n; j++) {
    	int x;
    	cin >> x;
    	a.push_back(x);
    }
}
void quay(vector<int> b)  {
	vector<int> c;
	for(int i = 0;i < b.size() - 1;i++) {
		int x = b[i] + b[i + 1];
		c.push_back(x);
	}
	if (c.size() > 0) quay(c);
	cout << "[";
	for(int i = 0;i < b.size()-1;i++)
		cout << b[i] << " ";
	cout << b[b.size() - 1] << "] ";
}


int main()
{
    cin>>t;
    for (int i=1; i<=t; i++){
        nhap();
        quay(a);
        cout << endl;
    }
    return 0;
}

    


