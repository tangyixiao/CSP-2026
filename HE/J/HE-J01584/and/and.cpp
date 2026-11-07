#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
long long ans=-1e9;
void dfs(int x,int sum,long long s)
{
	s=s&a[x];
	if(m==sum)
	{
		ans=max(ans,s);
		return ;
	}
	for(int i=x+1;i<=n;i++)
	{
		dfs(i,sum+1,s);
	}
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
	for(int i=1;i<=n;i++)
	{
		dfs(i,1,a[i]);
	}
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
