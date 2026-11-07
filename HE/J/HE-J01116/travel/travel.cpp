#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,a,b; //a是输出 
	b[0]='A';//这个没有意义 
	b[1]='B';
	b[2]='C';
	for(int i=0;i<4;i++)
	{
		a[i]='0';	
	}
	getline(cin,s);
		if(s[0]==s[7]&&s[1]==s[8])
		{
		a[0]='1';			
		if(s[3]==s[10]&&s[4]==s[11])
		{
			a[1]='1';	
			for(int i=0;i<3;i++)
			{
				if(s[5]==b[i])//ABC时 
				{
					if(s[12]=='A'||s[12]=='B'||s[12]=='C')
					{
					a[2]='1';
					if(s[5]=='B'||s[12]=='B') a[3]='1';
					}
				}	
			}
		
				if(s[5]=='D'||s[5]=='F')
				{
			if(s[12]=='D'||s[12]=='F')//DF时 
				{
				a[2]='1';
				a[3]='1';				
				}
				}
		}
		}
	for(int i=0;i<4;i++)
	cout<<a[i];
	return 0;
} 
