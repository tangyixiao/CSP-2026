#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,x,ans,y;
	string s,s1;
	char c;
	cin>>n;
	while(n)
	{
		cin>>x>>c;
		for(int i=0;i<x;i++)
		{
			s+=c;
		}
		n--;
	}
	y=s.size()-1;
	while(y>=-1)
	{
		s1+=s[y];
		y--;
	}
	y=s.size()-1;
	while(y>=-1)
	{
		if(s[y]!=s1[y])
		{
			ans=s.size()/2;
			cout<<ans;
			return 0;
		}
		y--;
	}
	cout<<"0";
	return 0;
 } 
