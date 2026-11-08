#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
//小R的车票上的车厢号、座位号，小X的车厢号座位号
	cin>>c1>>s1>>c2>>s2;
	//1
	if(c1==c2)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	//2
	if(c1==c2&&s1[1]==s2[1])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	//3
	if(s1[1]==s2[1]&&s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'&&s1[2]!=s2[2])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	//4
	if(s1[1]==s2[1]&&s1[2]+1==s2[2]&&s1[2]+1!='D'&&s2[2]-1!='C'||s1[1]==s2[1]&&s1[2]-1==s2[2]&&s1[2]+1!='D'&&s2[2]-1!='C'||s1[1]==s2[1]&&s2[2]+1==s1[2]&&s1[2]+1!='D'&&s2[2]-1!='C'||s1[1]==s2[1]&&s2[2]-1==s1[2]&&s1[2]+1!='D'&&s2[2]-1!='C')
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}
