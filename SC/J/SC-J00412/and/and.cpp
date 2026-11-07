#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200010];
const long long INF=-1e18;
long long ans=INF;
long long b[200010];
bool usd[200010];
void dfs(int k)
{
	if(k==m+1)
	{
		long long anns=b[1];
		for(int i=2;i<=m;i++)
		{
			anns=anns&b[i];
		}
		ans=max(ans,anns);
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(usd[i]==0)
		{
			b[k]=a[i];
			usd[i]=1;
			dfs(k+1);
			usd[i]=0;
		}
	}
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	dfs(1);
	cout<<ans;
	return 0;
}