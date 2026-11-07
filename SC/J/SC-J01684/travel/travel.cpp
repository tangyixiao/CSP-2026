#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool f;
bool check1()
{
	int a=(s1[0]-'0')*10+s1[1]-'0';
	int b=(s2[0]-'0')*10+s2[1]-'0';
	return a==b;
}
bool check2()
{
	if(s1[2]>='A'&&s1[2]<='C')
	{
		if(s2[2]>='A'&&s2[2]<='C')return true;
		return false;
	}
	else
	{
		f=true;
		if(s2[2]=='D'||s2[2]=='F')return true;
		return false;
	}
}
bool check3()
{
	if(f)return true;
	if(s1[2]=='A')return s2[2]=='B';
	if(s1[2]=='B')return true;
	if(s1[2]=='C')return s2[2]=='B';
	return false;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)
	{
		cout<<"0000";
		exit(0);
	}
	cout<<'1';
	if(!check1())
	{
		cout<<"000";
		exit(0);
	}
	cout<<'1';
	if(!check2())
	{
		cout<<"00";
		exit(0);
	}
	cout<<'1';
	if(!check3())
	{
		cout<<"0";
		exit(0);
	}
	cout<<'1';
	return 0;
}