#include<bits/stdc++.h> 
using namespace std;
string c1,s1,c2,s2;
bool tongce()
{
	if((s1[2]=='D')||(s1[2]=='F'))
	{
		if(s2[2]!='D'&&s2[2]!='F')
			return true;
		return false;
	}
	else
	{
		if(s2[2]=='D'||s2[2]=='F')
			return true;
		return false;
	}
}
bool xianglin()
{
	if(s1[2]=='D'&&s2[2]=='F')
		return true;
	if(s1[2]=='F'&&s2[2]=='D')
		return true;
	if(s1[2]=='C'&&s2[2]=='B')
		return true;
	if(s1[2]=='A'&&s2[2]=='B')
		return true;
	if(s1[2]=='B'&&s2[2]=='A')
		return true;
	if(s1[2]=='B'&&s2[2]=='C')
		return true;
	return false;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)
		cout<<"0000";
	else if((s1[0]+s1[1])!=(s2[0]+s2[1]))
		cout<<"1000";
	else if(tongce())
		cout<<"1100";
	else if(xianglin())
		cout<<"1111";
	else
		cout<<"1110";
	return 0;
}
