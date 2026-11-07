#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+10;
int n,m;
int id[N];
int ans[N];
int a[N];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		id[a[i]]=i;
		if(a[i]>=a[i-1])cnt++;
	}
	if(cnt==n)
	{
		for(int i=1;i<=n;i++)
		{
			if(id[a[i]]==i)ans[a[i]]+=i;
		}
		for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
		return 0;
	}
	int ma=0;
	for(int i=1;i<=n;i++)
	{
		ma=id[a[i]];
		for(int j=ma;j<=n;j++)
		{
			if(id[a[j]]!=j)j=id[a[j]];
			if(id[a[j]]==j)ans[a[j]]++;
		}
	
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
