#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool flag=1;
	for(int i=0;i<c1.size();i++)
	{
		if(c1[i]!=c2[i])
		{
			flag=false;
		}
	}
	cout<<flag;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&flag)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		flag=false;
	}
	if(!((s1[2]=='C'&&s2[2]=='D')||((s1[2]=='D'&&s2[2]=='C')))&&flag)
	{
		cout<<1;
	}
	else 
	{
		cout<<0;
		flag=false;
	}
	int a=s1[2]-'0',b=s2[2]-'0';
	if(flag&&abs(a-b)==1)
	{
		cout<<1;
	}
	else cout<<0;
	return 0;
}
