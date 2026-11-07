#include<bits/stdc++.h>
using namespace std;
bool f=false;
string s,s1,d,d1;
int q,w;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int i;
	cin>>s>>s1>>d>>d1;
	for(i=0;i<s.size();i++)
	{
		if(s[i]==d[i])
		{
			q++;
		}
	}
	if(s.size()==q)
	{
		cout<<1;
		f=true;
	}
	else
	{
		cout<<0;
	}
	if(f==true)
	{
		f=false;
		for(i=0;i<s1.size()-1;i++)
		{
			if(s1[i]==d1[i])
			{
				w++;
			}
		}
		if(s1.size()-1==w)
		{
			cout<<1;
			f=true;
		}
		else
		{
			cout<<0;
		}
	}
	else
	{
		cout<<0;
	}
	if(f==true)
	{
		if(s1[2]=='D'&&d1[2]=='F')
		{
			cout<<1;
			f==true;
		}
		else if(s1[2]=='F'&&d1[2]=='D')
		{
			cout<<1;
		}
		else if((s1[2]=='A'&&d1[2]=='B')||(s1[2]=='A'&&d1[2]=='C'))
		{
			cout<<1;
			f==true;
		}
		else if((s1[2]=='B'&&d1[2]=='A')||(s1[2]=='B'&&d1[2]=='C'))
		{
			cout<<1;
			f==true;
		}
		else if((s1[2]=='C'&&d1[2]=='A')||(s1[2]=='C'&&d1[2]=='B'))
		{
			cout<<1;
			f==true;
		}
		else
		{
			cout<<0;
			f=false;
		}
	}
	else
	{
		cout<<0;
	}
	if(f==true)
	{
		if(s1[2]=='D'&&d1[2]=='F')
		{
			cout<<1;
		}
		else if(s1[2]=='F'&&d1[2]=='D')
		{
			cout<<1;
		}
		else if((s1[2]=='A'&&d1[2]=='B')||(s1[2]=='C'&&d1[2]=='B'))
		{
			cout<<1;
		}
		else if((s1[2]=='B'&&d1[2]=='A')||(s1[2]=='B'&&d1[2]=='C'))
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
		cout<<0;
	}
	return 0;
}