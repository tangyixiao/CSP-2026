#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int l=0,p=0,o=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";
		p=1;
	}
	else
	{
		cout<<"0";
	}
	if(s1[0]==s2[0]&&s2[1]==s1[1]&&p==1)
	{
		cout<<"1";
		o=1;
	}
	else
	{
		cout<<"0";
	}
	if((((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))||((s1[2]!='D'&&s1[2]!='F')&&(s2[2]!='D'&&s2[2]!='F')))&&o==1)
	{
			cout<<"1";
			l=1;
		
	}
	else
	{
		cout<<"0";
	}
	if((s1[2]+1==s2[2]||s2[2]+1==s1[2])&&l==1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
}