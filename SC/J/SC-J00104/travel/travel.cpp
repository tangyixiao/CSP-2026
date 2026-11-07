#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string c1,c2;
bool a=true,b=true,c=true;
char s1[5],s2[5];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
	}
	else {
		cout<<0;
		a=false;
	}
	
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&a)
	{
		cout<<1;
	}
	else 
	{
		cout<<0;
		b=false;
	}
	
	if(s1[2]<'D'&&s2[2]<'D'&&b)
	{
		cout<<1;
	}
	else if(s1[2]>'C'&&s2[2]>'C'&&b)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		c=false;
	}
	
	if(c&&( (s1[2]=='D'&&s2[2]=='F') || (s1[2]=='F'&&s2[2]=='D') ))
	{
		cout<<1;
	}
	else if(c&&(s1[2]-s1[2]==1||s2[2]-s1[2]==1))
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	fclose(stdin),fclose(stdout);
	return 0;
}
