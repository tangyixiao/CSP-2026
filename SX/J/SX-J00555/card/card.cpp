#include<bits/stdc++.h>
using namespace std;
const int N = 500005,M = 300005;
int a[N],sum[N],cnt[M],ans[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","r",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i = 1;i <= n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= m;j++)
		{
			cnt[j]=0;
		}
		for (int j = i-1;j <= n;j++)
		{
			sum[j]=0;
		}
		for (int j = i;j <= n;j++)
		{
			if(cnt[a[j]])
			{
				sum[cnt[a[j]]]+=1;
				sum[j]+=-1;
				for (int k = cnt[a[j]]+1;k < j;k++)
				{
					cnt[a[k]]=0;
				}
			}
			cnt[a[j]]=j;
		}
		for (int j = i;j <= n;j++)
		{
			sum[j]+=sum[j-1];
		//	printf("%d ",sum[j]);
			if(!sum[j])
			{
				ans[a[j]]++;
			}
		}
	//	printf("\n");
	}
	for (int i = 1;i <= m;i++)
	{
		printf("%d ",ans[i]);
	}
	return 0;
}