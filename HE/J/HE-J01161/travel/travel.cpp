#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool f1=0,f2=0,f3=0,f4=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		f1=1;
	}
	if(s1.substr(0,2)==s2.substr(0,2)&&f1)
	{
		f2=1;
	}
	string p1,p2;
	if(s1.substr(2,1)=="A"||s1.substr(2,1)=="B"||s1.substr(2,1)=="C")
	{
		p1="z";
	}
	else
	{
		p1="y";
	}
	if(s2.substr(2,1)=="A"||s2.substr(2,1)=="B"||s2.substr(2,1)=="C")
	{
		p2="z";
	}
	else
	{
		p2="y";	
	}
	if(p1==p2&&f1&&f2)
	{
		f3=1;
	}
	if(s1.substr(2,1)=="D"&&s2.substr(2,1)=="F"||s2.substr(2,1)=="D"&&s1.substr(2,1)=="F"||s1.substr(2,1)=="B"&&s2.substr(2,1)=="C"||s2.substr(2,1)=="B"&&s1.substr(2,1)=="C"||s1.substr(2,1)=="A"&&s2.substr(2,1)=="B"||s2.substr(2,1)=="A"&&s1.substr(2,1)=="B"&&f1&&f2&&f3)
	{
		f4=1;
	}
	if(!f1)
	{
		cout<<"0000";
		return 0;
	}
	else if(f1&&!f2)
	{
		cout<<"1000";
		return 0;
	}
	else if(f1&&f2&&!f3)
	{
		cout<<"1100";
		return 0;
	}
	else if(f1&&f2&&f3&&!f4)
	{
		cout<<"1110";
		return 0;
	}
	else
	{
		cout<<"1111";
		return 0;
	}
	return 0;
} 
