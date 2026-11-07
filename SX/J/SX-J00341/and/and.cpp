#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,mmax=-1e9,a[200005],b[200005],sum;
bool vis[200005];
void dfs(ll step,ll pre)
{
	if(step>m)
	{
		sum=b[1];
		for(int i=1;i<step;i++) sum=(sum&b[i]);
		mmax=max(mmax,sum);
		return ;
	}
	for(ll i=pre+1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			b[step]=a[i];
			vis[i]=1;
			dfs(step+1,i);
			vis[i]=0;
		}
	}
	return ;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
	dfs(1,0);
	cout<<mmax;
	return 0;
}