#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll a[100005];
ll d[200006];
ll maxn=-1;
void dfs(int u,ll sum,ll num)
{
	if(sum==m)
	{
		maxn=max(maxn,num);
	}
	if(u==n) return;
	if(sum+1==1) dfs(u+1,sum+1,a[u+1]);
	else dfs(u+1,sum+1,num&a[u+1]);
	dfs(u+1,sum,num);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	dfs(0,0,0);
	cout<<maxn;
	return 0;
}
