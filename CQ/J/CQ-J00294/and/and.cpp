#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n,m;
ll ls[200005];
bool vis[2005];
ll ans;

inline void dfs(int step,ll sum)
{
	if(step==m)
	{
		ans=max(ans,sum);
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			vis[i]=1;
			dfs(step+1,(step!=1)?ls[i]:sum&ls[i]);
			vis[i]=0;
		}
	}
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	ll cnt=0,cnt2=0,cnt3=0;
	for(int i=1;i<=n;i++)
	{
		cin>>ls[i];
		if(i!=1) ans&=ls[i];
		else ans=ls[i];
		if(ls[i]==i-1) cnt2++;
		if(ls[i]<4) cnt3++;
		for(int j=30;j>=1;j--)
		{
			ll t=(long long)pow(2,j);
			if(t==ls[i]+1) cnt++;
		}
	}
	stable_sort(ls+1,ls+n+1,greater<int>());
	if(m==1)
	{
		cout<<ls[1];
		return 0;
	}
	if(cnt==n || cnt2==n || cnt3==n)
	{
		ans=0;
		for(int i=1;i<=m;i++)
		{
			if(i!=1) ans&=ls[i];
			else ans=ls[i];
		}
		cout<<ans;
		return 0;
	}
	if(n==m)
	{
		cout<<ans;
		return 0;
	}
	if(n==m+1)
	{
		ll sum=0;
		for(int i=1;i<=m;i++)
		{
			if(i!=1) sum&=ls[i];
			else sum=ls[i];
		}
		cout<<sum;
		return 0;
	}
	dfs(0,0);
	cout<<ans;
	return 0;
}

