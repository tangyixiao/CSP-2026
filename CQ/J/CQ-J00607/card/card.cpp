#include<bits/stdc++.h>
using namespace std;
int n,m,top;
int sum[300001],a[500001];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		int st[500001]{};
		top=n;
		for(int j=i;j<=n;j++)
		{
			bool bj=1;
			for(size_t k=1;k<=top;k++)
			{
				if(a[st[k]]==a[j])
				{
					top=k;
					bj=0;
					break;
				}
			}
			if(bj)
			{
				st[++top]=j;
			}
		}
		for(int j=1;j<=top;j++)
		{
			sum[a[st[j]]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		printf("%d ",sum[i]);
	}
	return 0;
}
