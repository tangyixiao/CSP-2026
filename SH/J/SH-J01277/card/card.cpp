#include<bits/stdc++.h>
using namespace std;
int a[500005],vis[500005],f[500005],ans[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,i,j,t,l;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;++i)
		scanf("%d",&a[i]);
	for(i=1;i<=n-1;++i)
	{
		t=0,l=0;
		for(j=1;j<=m;++j)
			vis[j]=0;
		for(j=i;j<=n;++j)
		{
			if(vis[a[j]]<=t)
				vis[a[j]]=j;
			else
			{
				if(!t)
					l=vis[a[j]]-1;
				t=j;
			}
		}
		if(t==0)
			t=i;
		for(j=t;j<=n;++j)
		{
			if(!f[a[j]])
				++ans[a[j]];
			++f[a[j]];
		}
		for(j=i;j<=l;++j)
		{
			if(!f[a[j]])
				++ans[a[j]];
			++f[a[j]];
		}
		for(j=1;j<=m;++j)
			f[j]=0;
	}
	for(i=1;i<=m;++i)
		printf("%d ",ans[i]+1);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
