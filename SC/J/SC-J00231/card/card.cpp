#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;
int n,m;
int a[200005];
int q[200005];
int cnt[200005];
int tot=0;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=1;i<=n;i++)
	{
		tot=0;
		for (int j=i;j<=n;j++)
		{
			for (int k=1;k<=tot;k++)
				if (q[k]==a[j])
				{
					tot=k-1;
					break;
				}
			q[++tot]=a[j];
		}
		for(int j=1;j<=tot;j++)
		{
			cnt[q[j]]++;
		}
	}
	for (int i=1;i<=m;i++)
		printf("%d ",cnt[i]);
	return 0;
}