#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt[300005],ans[300005];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=500&&m<=200)
	{
		for(int i=1;i<=n;i++)
		{
			memset(cnt,0,sizeof(cnt));
			for(int j=i;j<=n;j++)
			{
				if(cnt[a[j]]==0) cnt[a[j]]=j;
				else
				{
					for(int k=cnt[a[j]]+1;k<j;k++) cnt[k]=0;
					cnt[a[j]]=j;
				}
			}
			for(int j=1;j<=m;j++) if(cnt[j]!=0) ans[j]++;
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	}
	return 0;
}
/*
exp:24pts
writer:1419936
*/ 