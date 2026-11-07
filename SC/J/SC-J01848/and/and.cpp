#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],b[200005],maxx;
void dfs(int x,int u)
{
	if(x==m)
	{
		maxx = max(maxx,u);
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(b[i]==0)
		{
			b[i] = 1;
			dfs(x+1,(a[i]&u));
			b[i] = 0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(0,INT_MAX);
	cout<<maxx;
	return 0;
}