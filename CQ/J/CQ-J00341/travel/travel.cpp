#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool a=true,b,c,k;
	cin>>c1>>s1>>c2>>s2;
	k=0;
	if(c1==c2) 
	{
		k=1;
	cout<<1;	
	}
	else cout<<0;
	for(int i=0;i<2;i++)
	{
		if(s1[i]!=s2[i])
		{
			a=false;
			break;
		}
	}
	if(a&&k) cout<<1;
	else cout<<0;
	b=0;
	if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')
	{
		b=1;
	}
	else if((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))
	{
		b=1;
	}
	if(b&&a&&k) cout<<1;
	else cout<<0;
	c=0;
	if((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')) c=1;
	else if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')
	{
		if((s1[2]-s2[2]==1)||(s1[2]-s2[2]==-1)) c=1;
	}
	if(b&&a&&k&&c)cout<<1;
	else cout<<0;
	return 0;
}
