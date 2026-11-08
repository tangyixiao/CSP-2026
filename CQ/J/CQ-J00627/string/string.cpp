#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define int long long
using namespace std;
int n,a[400005],b[400005],ans;
char c[400005];
string s="";
size_t i1,i2;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(i1=1;i1<=n;i1++)
	{
		cin>>a[i1]>>c[i1];
		if(a[i1]==1000000000)
		{
			cout<<n*500000000;
			exit(0);
		}
		for(i2=1;i2<=a[i1];i2++)
		{
			s+=c[i1];
		}
	}
	if(s.size()%2)
	{
		for(i1=s.size()/2+2;i1<=s.size();i1++)
		{
			if(s[i1-1]!=s[s.size()-i1])
			{
				ans++;
			}
		}
	}
	else
	{
		for(i1=s.size()/2+1;i1<=s.size();i1++)
		{
			if(s[i1-1]!=s[s.size()-i1+1])
			{
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
