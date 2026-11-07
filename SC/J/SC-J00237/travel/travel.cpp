#include<bits/stdc++.h>
using namespace std;
struct seat
{
	string s;
}s[3];
string s1,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s[1].s>>s1;
	cin>>s[2].s>>s2;
	if(s[1].s==s[2].s)
	{
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			cout<<1;
			if((s1[2]>='A'&&s1[2]<='C')&&(s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F')&&(s2[2]>='D'&&s2[2]<='F'))
			{
				cout<<1;
				if(abs(s1[2]-s2[2])==1)
				{
					if(s1[2]=='C'&&s2[2]=='D'||s1[2]=='D'&&s2[2]=='C')
					{
						cout<<0;
					}
					else 
					{
						cout<<1;	
					}
				}
				else if((s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F'))
				{
					cout<<1;
				}
				else
				{
					cout<<0;
				}
			}
			else 
			{
				cout<<"00";
			}
		}
		else 
		{
			cout<<"000";
			return 0;
		}
	}
	else 
	{
		cout<<"0000";
		return 0;
	}
	return 0;
}