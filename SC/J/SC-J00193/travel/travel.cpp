#include<bits/stdc++.h>
using namespace std;
int mian()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int c1,c2,n;
	string s,s1,s2;
	cin>>n>>c1>>c2;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i]>>s1[i]>>s2[i];
	}
	for(int i=1;i<=s.size();i++)
	{
		if(c1==c2 && s1!=s2)
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		} 
		if(s1>="A" || s2<="C" && s1>="D" || s2<="F")
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		} 
		if(s1>="01" || s2<="18")
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		} 
	}
	cout<<endl;
	return 0;	
} 