#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],num[200005],bj[200005],ans=-0x7fffffff/2;
void dfs(int dep)
{
	if(dep==m+1)
	{
		int lans=a[num[1]];
		for(int i=2;i<=m;i++) lans&=a[num[i]];
		ans=max(ans,lans);
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		if(bj[i]) continue;
		num[dep]=i;
		bj[i]=1;
		dfs(dep+1);
		bj[i]=0;
	}
	return ;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(1);
	cout<<ans;
	return 0;
}
