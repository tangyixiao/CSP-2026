#include<bits/stdc++.h> 

using namespace std;
const int N=2e5+5;
int n,m,a[N],vis[N],flag=1;
int cnt=0,b[N],ans[N];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1])flag=0;
	}
	if(flag)
	{
		for(int i=1;i<=n;i++)
		{
			fill(vis+1,vis+n+1,0);
			for(int j=i;j<=n;j++)
			{
				if(vis[a[j]]==0)ans[a[j]]++;
				vis[a[j]]=1;	
			}
		}
		for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		fill(vis+1,vis+n+1,0);
		fill(b+1,b+n+1,0);
		cnt=0;
		for(int j=i;j<=n;j++)
		{
			fill(vis+1,vis+n+1,0);
			for(int k=1;k<=cnt;k++)vis[a[k]]=1;
			if(vis[a[j]]==0)
			{
				b[++cnt]=a[j];
				vis[a[j]]=1;
			}
			else 
			{
				for(int k=1;k<=cnt;k++)
				{
					if(a[j]==b[k])
					{
						for(int s=k+1;s<=cnt;s++)b[s]=0;
						cnt=k;
						break;
					}
				}
			}
		}
		for(int j=1;j<=cnt;j++)
		{
//			cout<<b[j]<<' ';
			ans[b[j]]++;
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/