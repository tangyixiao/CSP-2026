#include<bits/stdc++.h>
using namespace std;
int a[214514],vis[214514];
int main()
{
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	int ans=0;
	for(int k=30;k>=0;k--)
	{
		int cnt=0;
		for(int i=1;i<=n;i++)
		{
			if((a[i]&(1<<k))&&(!vis[i]))cnt++;
		}
		if(cnt<m)continue;
		for(int i=1;i<=n;i++)
		{
			if((a[i]&(1<<k))==0)vis[i]=1;
		}
		ans+=(1<<k);
	}
	cout<<ans;
}
//easist T3 ever?

