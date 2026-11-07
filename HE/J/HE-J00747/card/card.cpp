#include <bits/stdc++.h>
using namespace std;
int n,m;
int zb=0;
int a[600000];
int y[600000];
int ans[600000];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			zb=j;
			if(j==i)
			{
				y[zb]=a[j];
				continue;
			}
			if(a[find(y+1,y+n+1,a[j])-y]!=a[j])
			{
				y[zb]=a[j];
			}else{
				zb=find(y+1,y+n+1,a[j])-y;
				for(int k=find(y+1,y+n+1,a[j])-y;y[k]!=0;k++)
				{
					y[k]=0;
				}
				y[zb]=a[j];
			}
		}
		for(int s=1;s<=m;s++)
		{
			for(int q=1;q<=zb;q++)
			{
				if(y[q]==s)ans[s]++;
			}
		}
		for(int x=1;x<=zb;x++)
		{
			y[x]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
