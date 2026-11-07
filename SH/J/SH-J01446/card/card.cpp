#include <bits/stdc++.h>
using namespace std;
int n,m,a[100005],ans[100006];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		int tmp[100001];
		memset(tmp,0,sizeof(tmp));
		for(int j=i;j<=n;j++)
		{
			tmp[j]=a[j];
			bool p=0;
			for(int k=1;k<j;k++)
			{
				if(tmp[k]==a[j])
				{
					p=1;
				}
				if(p==1)
				{
					tmp[k]=-1;
				}
			}
		}
		for(int j=1;j<=n;j++)
		{
			if(tmp[j]!=-1) ans[tmp[j]]++;
		}
	}
	for(int i=1;i<=m;i++) printf("%d ",ans[i]);
	return 0;
}
