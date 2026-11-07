#include<bits/stdc++.h>
using namespace std;
int n,m,a[5005],f[3005],pos[3005],q[5005],t=0;
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
		memset(pos,-1,sizeof(pos));
		for(int j=i;j<=n;j++)
		{
			if(pos[a[j]]==-1)
			{
				q[++t]=a[j];
				pos[a[j]]=t;
			}
			else
			{
				for(int k=t;k>pos[a[j]];k--)
				{
					pos[q[k]]=-1;
				}
				t=pos[a[j]];
			}
		}
		while(t>0)
		{
			f[q[t]]++;
			t--;
		}
	}
	for(int i=1;i<=m;i++)
	{
		printf("%d ",f[i]);
	}
	return 0;
}