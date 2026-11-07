#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	char c;
	int n,l=0,ans=0,a;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		l+=a;
		for(int i=1;i<=a;i++)
		{
			s+=c;
		}
	}
	string s2="";
	int x=l;
	while(x>=0)
	{
		x--;
		s2+=s[x];
	}
	if(s==s2)
	{
		cout<<0;
		return 0;
	}
	for(int i=0;i<l/2;i++)
	{
		if(s[i]!=s2[i])
		{
			ans+=1;
		}
	}
	cout<<ans;
	return 0;
}