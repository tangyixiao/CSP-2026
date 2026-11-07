#include<bits/stdc++.h>
using namespace std;
const int N=5000005;
int n,m;
int a[N];
int ans[N];
int vis[N];
int main()
{
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int len=0;
		for(int j=1;j<=n;j++)vis[j]=0;
		for(int j=i;j<=n;j++)
		{
			if(vis[a[j]]==0)vis[a[j]]=++len;
			else
			{
			len=vis[a[j]]-1;
			for(int l=1;l<=n;l++)if(vis[l]>vis[a[j]])vis[l]=0;
			vis[a[j]]=++len;
			}
		}
		for(int j=1;j<=n;j++)if(vis[j])ans[j]++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}

