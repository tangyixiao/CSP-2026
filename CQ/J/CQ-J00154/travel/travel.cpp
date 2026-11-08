#include<bits/stdc++.h>
using namespace std;
map<char,bool>mp;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	mp['A']=mp['B']=mp['C']=1;
	mp['D']=mp['F']=0;
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)
	{
		cout<<"0000";
	}
	else
	{
		cout<<1;
		if(s1[0]==s2[0] and s1[1]==s2[1])
		{
			cout<<1;
			if(mp[s1[2]]==mp[s2[2]])
			{
				cout<<1;
				if(abs(s1[2]-s2[2])==1 or s1[2]=='D' or s2[2]=='D')
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
	
	
	return 0;
}
