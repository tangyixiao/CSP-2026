#include<bits/stdc++.h> 
using namespace std;
int n,m;
int yxl[300010],tly[300010],lyy[500010];
int main()
{
	freopen("card.in",r,stdin);
	freopen("card.out",w,stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&lyy[i]);
	}
	for(int i=1;i<=n;i++)
	{
		memset(yxl,0,sizeof yxl);
		for(int j=i;j<=n;j++)
		{
			if(yxl[lyy[j]]==0)
			{
				yxl[lyy[j]]=j;
			}
			else
			{
				int p=yxl[lyy[j]];
				for(int k=p;k<j;k++)
				{
					yxl[lyy[k]]=0;
				}
				yxl[lyy[j]]=j;
			}
		}
		for(int j=1;j<=m;j++)
		{
			if(yxl[j]!=0)
			{
				tly[j]++;
			}
		}
	}
	for(int j=1;j<=m;j++)
	{
		printf("%d ",tly[j]);
	}
	return 0;
}
