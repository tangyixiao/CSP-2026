#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int> 
#define endl '\n'
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool bol1=0;
	if(c1==c2)
	{
		bol1=1;
		cout<<1;
	}
	else
	{
		bol1=0;
		cout<<0;
	}
	bool bol2=0;
	if(s1.substr(0,2)==s2.substr(0,2)&&bol1==1)
	{
		bol2=1;
		cout<<1;
	}
	else
	{
		bol2=0;
		cout<<0;
	}
	bool bol3=0;
	if(((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D'))&&bol2==1)
	{
		bol3=1;
		cout<<1;
	}
	else
	{
		bol3=0;
		cout<<0;
	}
	if(abs(s1[2]-s2[2])==1&&bol3==1)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}