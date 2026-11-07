#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+10;
int n,m,dp[N],a[N],k,id[N];
bool vis[N];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdin);
	cin.tie(0);
	cin>>n>>m;
	int t=n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
//	cout<<endl;
	while(t--)
	{
		memset(vis,0,sizeof(vis));
		memset(id,0,sizeof(id));
		for(int i=n-t;i<=n;i++)
		{
			
			if(vis[a[i]]==0)
			{
				id[a[i]]=i;
				vis[a[i]]=1;
			}
			else
			{
				for(int j=id[a[i]];j<i;j++)
				{
					dp[a[j]]--;
					vis[a[j]]=0;
					id[a[j]]=0;
					if(dp[a[j]]<0) dp[a[j]]=0;
				}
//				id[a[i]]=i;
			}
			dp[a[i]]++;
			
//			cout<<i<<":";
//			for(int j=1;j<=m;j++)
//				cout<<dp[j]<<" ";
//			cout<<endl;
		}
	}
//	cout<<endl;
	for(int i=1;i<=m;i++) cout<<dp[i]<<" ";
	return 0;
} 
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/