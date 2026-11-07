#include<bits/stdc++.h>
using namespace std;
int n,a;
long long ans=0;
map<long long,char>mp;
char s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	long long d=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>s;
		for(long long j=d+1;j<=d+a;j++)
		{
			mp[j]=s;
		}
		d+=a;
	}
	for(long long i=1;i<=d/2;i++)
	{
		if(mp[i]!=mp[d-i+1])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
