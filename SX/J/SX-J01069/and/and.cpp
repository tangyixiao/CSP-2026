#include<bits/stdc++.h>
#define maxn 200005
using namespace std;
int n,m,a[maxn],ma=-1;
bool vis[maxn];
void dfs(int k,int ans)
{
	if(k==m)
	{
		//cout<<endl;
		ma=max(ma,ans);
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]) continue;
		vis[i]=1;
		int q=a[i];
		int qq=ans&a[i];
		//cout<<ans<<' '<<q<<' '<<qq<<endl;
		dfs(k+1,qq);
		vis[i]=0;

	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{

		cin>>a[i];

	}
	dfs(0,(1LL<<30)-1);
	cout<<ma;
	return 0;
}