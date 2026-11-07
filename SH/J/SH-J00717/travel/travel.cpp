#include<bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("travel.in",r,stdin);
	freopen("travel.out",w,stdout);
	string p1,p2,s1,s2;
	cin>>p1>>s1>>p2>>s2;
	int a=s1[0]*10+s1[1],b=s2[0]*10+s2[1];
	if(p1!=p2)
	{
		cout<<"0000";
		return 0;
	}
	else cout<<1;
	if(a!=b)
	{
		cout<<"000";
		return 0;
	}
	else cout<<1;
	if(s1[2]=='D'||s1[2]=='F')
	{
		if(s2[2]=='D'||s2[2]=='F')
		{
			cout<<"11";
		}
	}
	else if(s1[2]=='A')
	{
		if(s2[2]=='D'||s2[2]=='F')
		{
			cout<<"00";
		}
		else if(s2[2]=='B')
		{
			cout<<"11";
		}
		else
		{
			cout<<"10";
		}
	}
	else if(s1[2]=='B')
	{
		if(s2[2]=='D'||s2[2]=='F')
		{
			cout<<"00";
		}
		else
		{
			cout<<"11";
		}
	}
	else if(s1[2]=='C')
	{
		if(s2[2]=='D'||s2[2]=='F')
		{
			cout<<"00";
		}
		else if(s2[2]=='B')
		{
			cout<<"11";
		}
		else
		{
			cout<<"10";
		}
	}
	return 0;
}
