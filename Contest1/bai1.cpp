#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	int T;
	cin>>T;
	string binary;
	cin.ignore();
	while(T--)
	{
		
		cin>>binary;
		
		int l=binary.length()-1;
		while(l>=0)
		{
			if(binary[l]=='0')
			{
				binary[l]='1';
			
				for(int j=l+1;j<binary.length();j++)
				{
			
					binary[j]='0';
				}
				break;// neu binary[l]!=0  quay lai vong lap while
			}
			l--;
		}
		
		if(l<0)
		{
			for(int i=0;i<binary.length();i++)
			{
				cout<<'0';
			}
		}
		else
		{
			cout<<binary<<endl;
		}
	}
	return 0;
}
