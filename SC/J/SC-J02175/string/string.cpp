#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s="",ss="";
	long long len=0;
	for(long long i=1;i<=n;i++)
	{
		long long x;
		char c;
		cin>>x>>c;
		len+=x;
		for(long long j=1;j<=x;j++)
		{
			s+=c;
			ss+=c;
		}
	}
	reverse(ss.begin(),ss.end());
	long long ans=0;
	for(long long i=0;i<len;i++)
	{
		if(ss[i]!=s[i])
		{
			ans++;
		}
	}
	cout<<1LL*(ans+1)/2;
	return 0;
} 