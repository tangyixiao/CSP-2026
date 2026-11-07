#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if (c1!=c2)
	{
		cout<<"0000";
		return 0;
	}
	if (s1[0]!=s2[0]||s1[1]!=s2[1])
	{
		cout<<"1000";
		return 0;
	}
	string s="ABC",ss="DF";
	int c=0;
	for (int i=0;i<s.size();i++)
	{
		if (s1[2]==s[i]||s2[2]==s[i])
		{
			c++;
		}
	}
	if (c==1)
	{
		cout<<"1100";
		return 0;
	}
	c=0;
	for (int i=0;i<ss.size();i++)
	{
		if (s1[2]==ss[i]||s2[2]==ss[i])
		{
			c++;
		}
	}
	if (c==1)
	{
		cout<<"1100";
		return 0;
	}
	else if(c==2)
	{
		cout<<"1111";
		return 0;
	}
	if ((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C'))
	{
		cout<<"1111";
		return 0;
	}
	if ((s1[2]=='B'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B'))
	{
		cout<<"1111";
		return 0;
	}
	cout<<"1110";
	return 0;
}
