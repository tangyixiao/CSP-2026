#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s;
	if(s[1]==s[8])
	{
		cout<<1;
		if(s[4]==s[11]&&s[5]==s[12])
		{
			cout<<1;
			if((s[6]=='D'&&s[13]=='F')||(s[13]=='D'&&s[6]=='F'))
			{
				cout<<"11";
				return 0;
			}
			else if(s[6]<='C'&&s[13]<='C')
			{
				cout<<1;
				if(abs(s[6]-s[13]=='1'))
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
		}
	}
	else
	{
		cout<<"0000";
	}
	
	return 0;
}
