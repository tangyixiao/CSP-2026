#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005];
ll ans = 0;
ll n,m;
void dfs(ll cnt,ll sum,ll now)
{
	if(cnt == m)
	{
//		cout<<sum<<endl;
		ans = max(ans,sum);
		return;
	}
	for(int i = now+1;i<=n;i++)
	{
		dfs(cnt+1,(sum==0 ? a[i] : sum&a[i]),i);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	dfs(0ll,0ll,0ll);
	cout<<ans;
	return 0;
}