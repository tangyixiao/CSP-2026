#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a!=c)
	{
		cout<<"0000";
		return 0;
	 } 
	if(b[0]!=d[0]||b[1]!=d[1]) 
	{
		cout<<"1000";
		return 0;
	}
	if((int(b[2])>=65&&int(b[2])<=67&&int(d[2])>=68)||(int(d[2])>=65&&int(d[2])<=67&&int(b[2])>=68))
	{
		cout<<"1100";
		return 0;
	}
	if((int(b[2])+1==int(d[2])&&b[2]!='C')||(int(b[2])-1==int(d[2])&&b[2]!='D'))
	{
		cout<<"1111";
		return 0;
	}
	cout<<"1110";
	return 0;
}