#include<bits/stdc++.h>
using namespace std;
int n,m,a[55],maxx=0;
void dfs(int k,int cnt,int ans)
{
	if(cnt==m)
	{
		maxx=max(maxx,ans);
		return ;
	}
	if(n-k+1==m-cnt)
	{
		if(cnt==0)
		{
			dfs(k+1,cnt+1,a[k]);
		}
		else
		{
			dfs(k+1,cnt+1,(ans&a[k]));
		}
	}
	else
	{
		if(cnt==0)
		{
			dfs(k+1,cnt+1,a[k]);
		}
		else
		{
			dfs(k+1,cnt+1,(ans&a[k]));
		}
		dfs(k+1,cnt,ans);	
	}
	return ;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			maxx=max(maxx,a[i]);
		}
		printf("%d",maxx);
		return 0;
	}
	else if(m==n)
	{
		maxx=a[1];
		for(int i=1;i<=n;i++)
		{
			maxx=(maxx&a[i]);
		}
		printf("%d",maxx);
		return 0;
	}
	dfs(1,0,0);
	printf("%d",maxx);
	return 0;
}