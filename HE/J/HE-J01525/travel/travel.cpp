#include<bits/stdc++.h>
using namespace std;
int c1,c2,ans=1000;
string s1,s2;


int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)
	{
		cout<<0000;
		return 0;
	}
	
	int ru = (s1[0]-'0')*10 + s1[1] - '0';
	int xu = (s2[0]-'0')*10 + s2[1] - '0';
	if(ru != xu)
	{
		cout<<1000;
		return 0;
	}
	
	int rv = s1[2] - 'A';
	int xv = s2[2] - 'A';
	if(!((rv <= 2 && xv <= 2) || (rv > 2 && xv > 2)))
	{
		cout<<1100;
		return 0;
	}
	
	if(abs(rv-xv) != 1)
	{
		cout<<1110;
		return 0;
	}
	
	cout<<1111;
	return 0;
}
