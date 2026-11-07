#include<bits/stdc++.h>
using namespace std;
long long arr[2005],ans=0;
int n,m;
void dfs(int layer,long long x,int pre)
{
	
	if(layer>=m)
	{
		ans=max(ans,x);
		return;
	}
	int i;
	for(i=pre+1;i<=n;++i)
	{
		dfs(layer+1,x&arr[i],i);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int i,j;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;++i)
		scanf("%lld",&arr[i]);
	if(n<=20)
	{
		for(i=1;i<=n-m+1;++i)
			dfs(1,arr[i],i);
		printf("%lld",ans);
	}
	else if(n>20&&n<=2000)
	{
		if(m==1)
		{
			for(i=1;i<=n;++i)
				ans=max(ans,arr[i]);
			printf("%lld\n",ans); 
		}
		else if(m==2)
		{
			for(i=1;i<=n;++i)
			{
				for(j=i+1;j<=n;++j)
					ans=max(ans,arr[i]&arr[j]);
			}
			printf("%lld\n",ans); 
		}
		else if(m==n)
		{
			ans=arr[1];
			for(i=2;i<=n;++i)
				ans=ans&arr[i];
			printf("%lld\n",ans); 
		}
	}
	else if(m==n-1)
	{
		long long ans1=0;
		ans=arr[1];
		for(i=2;i<=n;++i)
			ans=ans&arr[i];
		for(i=1;i<=n;++i)
		{
			ans1=max(ans1,ans&arr[i]);
		}
		printf("%lld\n",ans1); 
	}
	else
	{
		sort(arr+1,arr+1+n);
		printf("%lld\n",arr[n-m+1]); 
	}
	return 0;
}

