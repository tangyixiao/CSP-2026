#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1000005;
int a[N];
int cnt[N];
int last[N];
int ans[N];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n,m; cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]; cnt[i]=1;
		last[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
		ans[a[i]]+=cnt[i];
		cnt[last[a[i]]+1]+=cnt[i];
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}

