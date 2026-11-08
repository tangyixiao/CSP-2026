#include<bits/stdc++.h>

using namespace std;
int n,m;
int a[500005],b[300005],cnt,ans[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n<=500&&m<=3000)
	{
		for(int _=1;_<=n;_++)
		{
			cnt=0;
			for(int i=_;i<=n;i++)
			{
				for(int j=1;j<=cnt;j++)
				{
					if(a[i]==b[j])
					{
						cnt=j-1;
						break;
					}
				}
				b[++cnt]=a[i];
			}
			for(int i=1;i<=cnt;i++)
			{
				ans[b[i]]++;
			}
		}
		for(int i=1;i<=m;i++)
		{
			printf("%d ",ans[i]);
		}
	}
	else
	{
		a[0]=a[1];
		for(int i=1;i<=n;i++)
		{
			if(a[i]!=a[i-1])
			{
				printf("%d ",i-1);
			}
		}
		printf("%d",n);
	}
	return 0;
}
