#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e5+10;
int n,m,a[N],ans[N],w[N];
bool vis[N],f1=1;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=2;i<=n;++i)
		if(a[i]<a[i-1])
		{
			f1=0;
			break;
		}
	if(f1)
	{
		for(int i=1;i<=n;++i)
		{
			for(int j=i;j<=n;++j) vis[j]=1;
			for(int j=i;j<=n;++j)
			{
				if(j==i) continue;
				if(a[j]==a[j-1]) vis[j]=0;
			}
			for(int j=i;j<=n;++j)
				if(vis[j]) ans[a[j]]++;
		}
		for(int i=1;i<=m;++i) cout<<ans[i]<<" ";
		return 0;
	}
	if(m<=2)
	{
		if(m==1)
		{
			cout<<n;
		}
	}
	for(int i=1;i<=n;++i)
	{
		for(int j=i;j<=n;++j) vis[j]=1;
		for(int j=1;j<=m;++j) w[i]=0;
		for(int j=i;j<=n;++j)
		{
			if(!w[a[j]]) w[a[j]]=j;
			else
			{
				for(int k=w[a[j]];k<j;++k) vis[k]=0;
				w[a[j]]=0;
			}
		}
		for(int j=i;j<=n;++j)
			if(vis[j]) ans[a[j]]++;
	}
	for(int i=1;i<=m;++i) cout<<ans[i]<<" ";
	return 0;
}
