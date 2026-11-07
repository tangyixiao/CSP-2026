#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010];
long long maxx=-0x3f3f3f3f3f3f3f3f;
bool flag=false,flag2=false;
void dfs(int x,long long sum,int cnt)
{
	if(m==cnt)
	{
		maxx=max(maxx,sum);
		return;
	}
	for(int i=x+1;i<=n;i++)
	{
		dfs(i,(sum&a[i]),cnt+1);
	}
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]!=i-1)
		{
			flag=true;
		}
		double aa=log2(a[i]+1);
		int bb=aa;
		if(aa!=bb)
		{
			flag2=true;
		}
	}
	if(flag==false)
	{
		long long ans=a[n-m+1];
		for(int i=n-m+2;i<=n;i++)
		{
			ans=(ans&a[i]);
		}
		printf("%lld",ans);
		return 0;
	}
	else if(flag2==false)
	{
		sort(a+1,a+n+1);
		long long ans=a[n-m+1]; 
		for(int i=n-m+2;i<=n;i++)
		{
			ans=(ans&a[i]);
		}
		printf("%lld",ans);
		return 0;
	}
	else if(n<=2000)
	{
		for(int i=1;i<=n;i++)
		{
			dfs(i,a[i],1);
		}
		printf("%lld",maxx);
		return 0;
	}
	return 0;
}