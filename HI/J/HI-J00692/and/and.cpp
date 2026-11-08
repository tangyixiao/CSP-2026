#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200200],maxn,ans;
long long cmp(long long alpha,long long beta)
{
	return alpha>beta;
}
int main()
{
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	scanf("%lld%lld",&n,&m);
	for(long long i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		maxn=max(maxn,a[i]);
	}
	if(m==1)
	{
		ans=maxn;
	}
	else if(m==n)
	{
		ans=a[1];
		for(long long i=2;i<=n;i++)
		{
			ans&=a[i];
		}
	}
	else if(m==2)
	{
		for(long long i=1;i<n;i++)
		{
			for(long long j=i+1;j<=n;j++)
			{
				ans=max(ans,i&j);
			}
		}
	}
	else
	{
		sort(a+1,a+n+1,cmp);
		ans=a[m];
	}
	printf("%lld",ans);
	return 0;
	
	fclose(stdin);
	fclose(stdout);
	
}
