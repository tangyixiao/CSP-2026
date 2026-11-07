#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string c1,s1,c2,s2;
	bool a=false,b=false,c=false;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		a=true;
		cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	cout<<endl;
	
	
	if(s2[0]==s1[0]&&s2[1]==s1[1]&&a)
	{
		b=true;
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if(s2[2]<='C'&&s2[2]>='A')
		if(s1[2]<='C'&&s1[2]>='A')
		{
			c=true;
			cout<<1;
		}
	else
		if(s2[2]=='D'||s2[2]=='E')
		{
			cout<<1;
			c=true;
		}
	if(!c)
		cout<<"00";
		return 0;
	if(((s2[2]==s1[1]-1)||(s2[2]==s1[2]+1))&&c)
		cout<<1;
	else 
		cout<<"0";
	return 0;
 } 
