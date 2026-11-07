#include<iostream>
using namespace std;
string c1,s1,c2,s2;
bool flag=0;
bool t=0;
bool t1,t2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2)
	{
		cout<<"1";
	}else
	{
		cout<<"0";
		flag=1;
	}
	
	if(flag==1)
	{
		cout<<"0";
	}else
	{
		if(s1[0]==s2[0] && s1[1]==s2[1])
		{
			cout<<"1";
		}else
		{
			cout<<"0";
			flag=1;
		}
	}
	
	if(flag==1)
	{
		cout<<"0";
	}else
	{
		if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C')
		{
			t1=1;
		}else
		{
			t1=0;
		}
		if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')
		{
			t2=1;
		}else
		{
			t2=0;
		}
		if(t1==t2)
		{
			cout<<"1";
		}else
		{
			cout<<"0";
			flag=1;
		}
	}
	
	if(flag==1)
	{
		cout<<"0";
	}else
	{
		if(t1==0)
		{
			cout<<"1";
		}else
		{
			if(s1[2]=='B'||s2[2]=='B')
			{
				cout<<"1";
			}else
			{
				cout<<"0";
			}
		}
	}
	return 0;
 } 
