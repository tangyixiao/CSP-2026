#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,rs,xs;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	rs=s1[0]+s1[1];
	xs=s2[0]+s2[1];
	if(rs==xs)
	{
		cout<<"1";
	}
	else
	{
		cout<<"000";
		return 0;
	}
	rs=s1[2];
	xs=s2[2];
	if(((rs=="F")&&(xs=="D"))||((rs=="D")&&(xs=="F"))||((rs!="F")&&(xs!="D")&&(xs!="F")&&(rs!="D")))
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(((rs=="F")&&(xs=="D"))||((rs=="D")&&(xs=="F"))||((rs=="A")&&(xs=="B"))||((rs=="B")&&(xs=="A"))||((rs=="B")&&(xs=="C"))||((rs=="C")&&(xs=="B")))
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
		return 0;
	}
	return 0;
}