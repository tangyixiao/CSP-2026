#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","r",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1=c2)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(s1=s2-1||s1=s2+1&&s1!="C"||s1!="D"&&s2!="D"||s2!="C")
	{
		cout<<"111";
	}
	else
	{
		return 0;
	}
	return 0;
}