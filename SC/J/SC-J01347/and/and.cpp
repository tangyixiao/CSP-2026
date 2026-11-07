#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,mx=0;
int a[200005],vis[200005];
void dfs(int k,int sum)
{
	if(k==m+1)
	{
		mx=max(mx,sum);
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
//			cout<<a[i]<<'\n';
			vis[i]=1;
			if(k==1) dfs(k+1,a[i]);
			else dfs(k+1,sum&a[i]);
			vis[i]=0;
		}
	}
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]; 
	}
	dfs(1,0);
	cout<<mx;
	return 0;
 }