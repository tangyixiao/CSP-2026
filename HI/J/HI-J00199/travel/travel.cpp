#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2,a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";
	}
	else if(c1!=c2)
	{
		cout<<"0000";
		return 0;
	}
	
	for(int i=0;i<2;i++)
	{
		if(s1[i]>='0'&&s1[i]<='9')
		{
			a=s1[i];
		}
	}
	for(int i=0;i<2;i++)
	{
		if(s2[i]>='0'&&s2[i]<='9')
		{
			b=s2[i];
		}
	}
	if(a==b)
	{
		cout<<"1";
	}
	else
	{
		cout<<"000";
		return 0;
	}
	for(int i=0;i<=4;i++)
	{
		if((s1[i]=='A'||s1[i]=='B'||s1[i]=='C')&&(s2[i]=='A'||s2[i]=='B'||s2[i]=='C'))
		{
			cout<<"1";
			if(s1[i]=='B'||s2[i]=='B')
			{
				cout<<"1";
				return 0;
			}
			else
			{
				cout<<"0";
				return 0;
			}
		}
		else if((s1[i]=='D'||s1[i]=='E')&&(s2[i]=='D'||s2[i]=='E'))
		{
			cout<<"11";
		}
		else if( ( (s1[i]=='A'||s1[i]=='B'||s1[i]=='C') && (s2[i]=='D'||s2[i]=='E') ) || ( (s2[i]=='A'||s2[i]=='B'||s2[i]=='C') && (s1[i]=='D'||s1[i]=='E') ) )
		{
			cout<<"00";
			return 0;
		}
	}
	return 0;
}
