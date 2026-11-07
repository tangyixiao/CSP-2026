#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+5;
ll n,m,aa[N],cnt=1,cct=1,a[N],zh[N],ys[N],ans[N],vis[N],cf[N],f,mx;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m>>aa[1];
	for(ll i=2;i<=n+1;i++)
	{
		if(i<=n) cin>>aa[i];
		mx=max(mx,a[i]);
		if(aa[i]!=aa[i-1])
		{
			cf[cct]=cnt;
			a[cct]=aa[i-1];
			cct++;
			cnt=0;
		}
		if(i<=n&&aa[i-1]>aa[i]) f=1;
		cnt++;
	}
	if(f==0)
	{
		for(ll i=1;i<=n;i++)
		{
			if(aa[i]==aa[i+1]) continue;
			ans[aa[i]]=i;
		}
		for(ll i=1;i<=m;i++)
		{
			cout<<ans[i];
			if(i<m) cout<<' ';
		}
		return 0;
	}
	if(n>5000&&mx<=2)
	{
		for(ll i=1;i<cct;i++)
		{
			if(a[i]!=a[cct-1])
			{
				ans[1]+=cf[i];
				ans[2]+=cf[i];
			}
			else ans[a[i]]+=cf[i];
		}
		for(ll i=1;i<=m;i++)
		{
			cout<<ans[i];
			if(i<m) cout<<' ';
		}
		return 0;
	}
	for(ll i=1;i<cct;i++)
	{
		for(ll j=0;j<=m;j++)
		{
			ys[j]=0;
			zh[j]=0;
		}
		for(ll j=0;j<cct;j++) vis[j]=0;
		for(ll j=i;j<cct;j++)
		{	
			if(zh[a[j]]!=0&&vis[zh[a[j]]]==0)
			{
				for(ll k=zh[a[j]];k<j;k++)
				{
					if(vis[k]==0) ys[a[k]]=0;
					vis[k]=1;
				}
			}
			ys[a[j]]=1;
			zh[a[j]]=j;
		}
		for(ll j=1;j<=m;j++) if(ys[j]>0) ans[j]+=cf[i];
	}
	for(ll i=1;i<=m;i++)
	{
		cout<<ans[i];
		if(i<m) cout<<' ';
	}
	return 0;
}
