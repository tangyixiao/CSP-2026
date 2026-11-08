#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,ct,st;
	cin>>c>>s>>ct>>st;
	if(c==ct)
	{
		cout<<1;
		if(s[0]*10+s[1]==st[0]*10+st[1])
		{
			cout<<1;
			if(s[2]>='A'&&s[2]<='C'&&st[2]>='A'&&st[2]<='C'||s[2]>='D'&&s[2]<='F'&&st[2]>='D'&&st[2]<='F')
			{
				cout<<1;
				if(abs(s[2]-st[2])==1)
				{
					cout<<1;
				}
				else
					cout<<0;
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
