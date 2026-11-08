#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	bool x1=1,x2=1;
	cin>>c1>>s1>>c2>>s2;
	int a1=s1[0]-'0'+s2[1]-'0';
	int a2=s1[0]-'0'+s2[1]-'0';
	if(c1==c2)
	{
	    cout<<1;
	}
	else
	{
		x1=0;
		cout<<0;
	}
	if(x1)
	{
		cout<<1;
	}
	else
	{
		x2=0;
		cout<<0;
	}
	return 0;
}




