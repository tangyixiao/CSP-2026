#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define maxn 2005
int n,m,ans;
int a[maxn],f[maxn][maxn];
void dfs(int idx,int cnt,int sum)
{
	if(cnt==n)
	{
		ans=max(ans,sum);
		return ;
	}
//	if(f[idx-1][cnt]>sum)return ;
//	f[idx-1][cnt]=sum;
	for(int i=idx;i<=n;i++)
	{
		dfs(idx+1,cnt+1,sum&a[i]);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	dfs(1,0,(1<<30)-1);
	cout<<ans;
	return 0;
}