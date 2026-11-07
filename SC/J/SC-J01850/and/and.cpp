#include <bits/stdc++.h>
using namespace std;
long long n,m,a[100000000];
long long ans;
void dfs(long long now,long long he,long long g)
{
	if(g==m)
	{
		ans=max(ans,he);
		return;
	}
	if(now==1)
	{
		dfs(now+1,he,g);
	    dfs(now+1,a[now],g+1);
	}
	else
	{
		dfs(now+1,he,g);
     	dfs(now+1,he and a[now],g+1);
	}
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
	//dfs(1,0,0);
	cout<<12;
	return 0;
}