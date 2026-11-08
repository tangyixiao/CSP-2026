#include<bits/stdc++.h>
using namespace std;

int n,m;
int ls[500005];
int vis[300005];
int cnt[300005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	int cnt1=0;
	for(int i=1;i<=n;i++)
	{
		cin>>ls[i];
		if(ls[i]>=ls[i-1]) cnt1++;
	}
	if(cnt1==n)
	{
		for(int i=1;i<=m;i++) cout<<n<<' ';
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		memset(vis,0,sizeof vis);
		int len=0;
		for(int j=i;j<=n;j++)
		{
			if(vis[ls[j]]!=0)
			{
				for(int k=1;k<=m;k++)
				{
					if(vis[k]>vis[ls[j]]) vis[k]=0;
				}
			}
			else vis[ls[j]]=++len;
		}
		for(int j=1;j<=m;j++)
		{
			if(vis[j]!=0) cnt[j]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
	return 0;
}

