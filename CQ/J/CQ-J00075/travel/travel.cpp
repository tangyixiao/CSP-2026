#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string ans;
	if(c1==c2)
	{
		ans+='1';
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	bool b1=1;
	for(int i=0;i<2;i++)
	{
		if(s1[i]!=s2[i])
		{
			b1=0;
			break;
		}
	}
	if(b1==0)
	{
		cout<<"1000";
		return 0;
	}
	else
	{
		ans+='1';
	}
	if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))
	{
		ans+='1';
	}
	else if((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))
	{
		ans+='1';
	}
	else
	{
		cout<<"1100";
		return 0;
	}
	if(s1[2]=='A'&&s2[2]=='B'||s2[2]=='A'&&s1[2]=='B')
	{
		ans+='1';
	}
	else if(s1[2]=='B'&&s2[2]=='C'||s2[2]=='B'&&s1[2]=='C')
	{
		ans+='1';
	}
	else if(s1[2]=='D'&&s2[2]=='F'||s2[2]=='D'&&s1[2]=='F')
	{
		ans+='1';
	}
	else
	{
		cout<<"1110";
		return 0;
	}
	cout<<ans;
	return 0;
}
