#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],maxk=-2e9,ans=-2e9;
bool vis[200005];
bool cmp(int a,int b)
{
	return a>b;
}
void search(int x,int k,int num)
{
	if(vis[x])
	{
		return;
	}
	if(k==m)
	{
		ans=max(ans,num);
		return;
	}
	vis[x]=1;
	for(int i=1;i<=n;i++)
	{
		search(i,k+1,num&a[i]);
	}
	vis[x]=0;
}
void solve2()
{
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		search(i,1,a[i]);
	}
}
void solve1()
{
	sort(a+1,a+n+1,cmp);
	ans=a[1];
	for(int i=2;i<=m;i++)
	{
		ans&=a[i];
	}
	cout<<ans;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n>2000)
	{
		solve1();
		return 0;
	}
	solve2();
	cout<<ans;
	//0pts
	return 0;
}

