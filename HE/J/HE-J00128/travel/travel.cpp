#include<bits/stdc++.h>
#define ll long long
using namespace std;
string t1,s1,t2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin >>t1 >>s1 >>t2 >>s2;
	int ans1=(s1[0]-'0')*10+s1[1]-'0',ans2=(s2[0]-'0')*10+s2[1]-'0';
	if(s1[2]=='F')
		s1[2]='E';
	if(s2[2]=='F')
		s2[2]='E';
	if(t1!=t2)
	{
		cout <<"0000";
		return 0;
	}
	if(ans1!=ans2)
	{
		cout <<"1000";
		return 0;
	}
	if( (s1[2]<='C' && s2[2]>='D') || (s2[2]<='C' && s1[2]>='D') )
	{
		cout <<"1100";
		return 0;
	}
	if( (int)abs( int(s1[2]-s2[2]) ) !=1)
	{
		cout <<"1110";
		return 0;
	}
	cout <<"1111";
	return 0;
 } 
