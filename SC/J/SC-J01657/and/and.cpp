#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[1000010],cnt[1000010],maxn,vis[1000010],ans,v[1000010];
vector<ll>x[110];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		ll tmp=a[i],tc=0;
		while(tmp)
		{
			tc++;
			cnt[tc]+=tmp%2;
			if(cnt[tc]>=m)maxn=max(tc,maxn);
			if(tmp%2)x[tc].push_back(i);
			tmp/=2;
		}
	}
	for(int i=0;i<x[maxn].size();i++)
	{
		vis[x[maxn][i]]=1;
	}
	ans+=1<<(maxn-1);
	for(int i=maxn-1;i>=1;i--)
	{
		int tmp=0;
		memset(v,0,sizeof v);
		for(int j=0;j<x[i].size();j++)
		{
			tmp+=vis[x[i][j]];
			v[x[i][j]]=vis[x[i][j]];
		}
		if(tmp>=m)
		{
			memset(vis,0,sizeof vis);
			for(int j=1;j<=n;j++)
			{
				vis[j]=v[j];
			}
			ans+=1<<(i-1);
		}
	}
	cout<<ans;
	return 0;
}
