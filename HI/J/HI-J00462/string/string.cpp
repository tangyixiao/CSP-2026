#include<bits/stdc++.h>
using namespace std;
string s,s1,s2;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a;
	string b;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		for(int j=1;j<=a;j++)
		{
			cin>>b;
			s+=b;
		}
	}
	int f=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=s[i+1])
		{
			f=1;
		}
	}
	if(f=0)
	{
		cout<<0;
	}
	return 0;
}
