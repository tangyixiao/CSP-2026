#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2*1e5+10;
ll n,m,ans;
ll num[N];
void dfs(ll id,ll tot,ll sum)
{
	if(id>n||tot>=m)
	{
		ans=max(ans,sum);
		return;
	}
	for(int i=id;i<=n;i++)
	{
		dfs(id+1,tot+1,sum==0?num[i]:sum&num[i]);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>num[i];
	dfs(1,0,0);
	cout<<ans;
	return 0;
}