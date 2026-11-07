#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+5;
int a[maxn],b[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		int c[n+5],local[m+5],f[m+5];
		memset(c,0,sizeof(c));
		memset(f,0,sizeof(f));
		int p=1;
		for(int j=i;j<=n;j++)
		{
			if(f[a[j]]==0)
			{
				c[p]=a[j];
				local[a[j]]=p;
				p++;
				f[a[j]]=1;
			}
			else
			{
				for(int k=local[a[j]]+1;k<=n;k++)
				{
					f[c[k]]=0;
					c[k]=0;
				}
				p=local[a[j]]+1;
			}
		}
		for(int j=1;j<=n;j++)
		{
			if(c[j]>0)b[c[j]]++;
		}
	}
	for(int i=1;i<=m;i++)printf("%d ",b[i]);
}