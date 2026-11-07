#include<bits/stdc++.h>
using namespace std;
int a[500010],cnt[300010],ans[300010],now[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,f1=1;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<a[i-1])
		{
			f1=0;
		}
		cnt[a[i]]++;
	}
	if(f1)
	{
		long long sum=0;
		for(int i=1;i<=m;i++)
		{
			sum+=cnt[i];
			printf("%lld ",sum);
		}
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(now[a[j]]==0)
			{
				now[a[j]]=j;
			}
			else
			{
				for(int k=now[a[j]];k<=j;k++)
				{
					now[a[k]]=0;
				}
				now[a[j]]=j;
			}
		}
		for(int i=1;i<=m;i++)
		{
			if(now[i])
			{
				ans[i]++;
			}
			now[i]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		printf("%d ",ans[i]);
	}
	return 0;
}
