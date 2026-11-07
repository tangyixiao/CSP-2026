#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a1,a2,a3,a4;
int cc1,cc2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;	
	if(c2[0]==c1[0]&&c1[1]==c2[1])
	{
		a1=1;
	if(s2[0]==s1[0]&&s1[1]==s2[1])
	{
		a2=1;
	if((s2[2]=='D'||s2[2]=='F')&&(s1[2]=='D'||s1[2]=='F'))
	{
		a3=1;
		a4=1;
	}
	else
	{
		if((s1[2]>='A'&&s1[2]<='C')&&(s2[2]>='D'&&s2[2]<='F')||(s2[2]>='A'&&s2[2]<='C')&&(s1[2]>='D'&&s1[2]<='F'))
		{
			a3=0;
			a4=0;
		}
		else
		{
			a3=1;
			if(((s1[2]=='A'&&s2[2]=='B')||(s2[2]=='A'&&s1[2]=='B'))||((s1[2]=='C'&&s2[2]=='B')||(s2[2]=='C'&&s1[2]=='B')))
			a4=1;
			else
			a4=0;
		}
	}
	}
	else
	{
		a2=0;
	}
	}
	else
	{
		a1=0;
	}

cout<<a1<<a2<<a3<<a4;
	return 0;
}
