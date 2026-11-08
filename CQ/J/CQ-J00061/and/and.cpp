#include<bits/stdc++.h>
using namespace std;

int n,m,ls[200005],ans,mx;

int dfs(int a,int j,int t)
{
	int mx=-1;
	if(t==0)
	{
		for(int i=j;i<=n;i++)
		{
			mx=max(mx,a&ls[i]);
		}
		return mx;
	}
	for(int i=j;i<=n;i++)
	{
		dfs(a&ls[i],i,t-1);
	}
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	cin>>ls[1];
	ans=ls[1];
	for(int i=2;i<=n;i++)
	{
		cin>>ls[i];
		ans=ans&ls[i];
	}
	sort(ls+1,ls+n+1);
	if(m==n)
	{
		cout<<ans;
	}
	if(m==1)
	{
		cout<<ls[n];
	}
	for(int i=1;i<=n-m;i++)
	{
		mx=max(mx,dfs(ls[i],i,m));
	}
	cout<<mx;
	return 0;
}
