#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,s1,s2,s3;
	int c = 0,p = 0,w = 0,x = 0;
	cin>>s>>s1>>s2>>s3;
	if(s == s2)
	{
		c = 1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(s1[0] == s3[0]&&s1[1] == s3[1])
	{
		p = 1;
	}
	if(p == 1)
	{
		if(s1[2] < 'D'&&s1[2] < 'F'&&s3[2] < 'D'&&s3[2] < 'F')
		{
			w = 1;
		}
		else if(s1[2] >= 'D'&&s1[2] >= 'F'&&s3[2] >= 'D'&&s3[2] >= 'F')
		{
			w = 1;
		}
	}
	if(w == 1)
	{
		if(s1[2]+1 == s3[2]||s1[2]-1 == s3[2])
		{
			x = 1;
		}
	}
	cout<<c<<p<<w<<x;
}
