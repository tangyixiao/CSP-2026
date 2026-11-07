#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
bool op1=false,op2=false,op3=false;


int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		op1=true;
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&op1)
	{
		op2=true;
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(s1[2]<'D'&&s2[2]<'D'&&op2)
	{
		op3=true;
		cout<<1;
	}
	else if(s1[2]>='D'&&s2[2]>='D'&&op2)
	{
		op3=true;
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(s1[2]+1==s2[2]&&s2[2]!='D'&&op3)
	{
		
		cout<<1;
	}
	else if(s1[2]-1==s2[2]&&s2[2]!='C'&&op3)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	
	return 0;
}