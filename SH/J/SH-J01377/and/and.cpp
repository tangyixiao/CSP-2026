#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int N=1000005;
LL n,m;
LL a[N];
bool vis[N];
LL d=-1;
void solve(int u,LL x,LL dep)
{
	vis[u]=1;
	//cout<<x<<' '<<dep<<'\n';
	if(dep==m)
	{
		d=max(d,x);
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])solve(i,(a[i]&x),dep+1);
	}
	vis[u]=0;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	LL ans=-1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		memset(vis,0,sizeof(vis));
		d=-1;
		solve(i,a[i],1);
		//cout<<d<<endl;
		ans=max(ans,d);
	}
	cout<<ans<<' ';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
