#include <bits/stdc++.h>
using namespace std;
int n,m;
long long ans=0LL;
long long a[200005];

void dfs(int u,int x,long long y)
{
	if(x==m)
	{
		ans=max(ans,y);
		return ;
	}
	for(int i=u+1;i<=n;i++)
	{
		dfs(i,x+1,(long long)y&a[i]);
	}
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	dfs(0,0,pow(2,31)-1);
	cout<<ans<<endl;
	return 0;
}