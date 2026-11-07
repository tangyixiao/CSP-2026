#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=5e5+10;
int n,m;
int a[N],last[N],cnt[N];
namespace mm
{
	vector<int> v[N];
	void dfs(int x)
	{
		for(auto y:v[x])
		{
			dfs(y);
			cnt[x]+=cnt[y];
		}
	}
	void solve()
	{
		for(int i=1;i<=m;i++) v[a[last[i]+1]].push_back(i);
		dfs(a[n]);
		for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	}
}
namespace sA
{
	int nxt[N];
	void solve()
	{
		for(int i=1;i<=m;i++)
		{
			cnt[i]+=cnt[i-1];
			cout<<cnt[i]<<" ";
		}
	}
}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	#endif
	bool A=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>a[i-1]) A=0;
	}
	for(int i=1;i<=n;i++) last[a[i]]=i,cnt[a[i]]++;
	if(A) sA::solve();
	else mm::solve();
	return 0;
}

