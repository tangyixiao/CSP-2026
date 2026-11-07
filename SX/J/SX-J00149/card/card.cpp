#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],p[500005],ans[300005];
int main()
{
	freopen("card4.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool f=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1])	f=0;
	}
	if(f)
	{
		for(int i=1;i<=n;i++)
		{
			memset(p,0,sizeof(p));
			int tot=0;
			for(int j=i;j<=n;j++)
			{
				int id=lower_bound(p+1,p+tot+1,a[j])-p;
				if(p[id]==a[j])	tot=id;
				else	p[++tot]=a[j];
			}
			for(int j=1;j<=tot;j++)	ans[p[j]]++;
		}
		for(int i=1;i<=m;i++)	cout<<ans[i]<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		memset(p,0,sizeof(p));
		int tot=0;
		for(int j=i;j<=n;j++)
		{
			for(int k=1;k<=tot;k++)
			{
				if(p[k]==a[j])
				{
					tot=k-1;
					break;
				}
			}
			p[++tot]=a[j];
		}
		for(int j=1;j<=tot;j++)	ans[p[j]]++;
	}
	for(int i=1;i<=m;i++)	cout<<ans[i]<<" ";
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
