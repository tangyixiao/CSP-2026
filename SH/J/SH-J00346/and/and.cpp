#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,ans,a[N],cnt[35];
bool vis[N],tmp[N];
bool check(int id)
{
	int res=0;
	for(int i=1;i<=n;i++)
	{
		if(!vis[i]) continue;
		int t=a[i]>>id;
		if(t&1) res++;
		else tmp[i]=false;
	}
	return res>=m;
}
void update(int id)
{
	ans+=1<<id;
	for(int i=1;i<=n;i++)
	{
		vis[i]&=tmp[i];
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	memset(vis,true,sizeof(vis));
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=30;i>=0;i--)
	{
		memset(tmp,true,sizeof(tmp));
		if(check(i)) update(i);
	}
	cout<<ans;
	return 0;
}
