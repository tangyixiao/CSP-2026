#include<bits/stdc++.h>
#define i128 __int128
#define ll long long
#define Pii pair<int,int>
#define fi first
#define se second

using namespace std;
const int N=5e5+10;

int n,m,b[N],p[N],ans[N];

signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>p[i],b[p[i]]=max(b[p[i]],i);
	for(int i=1;i<=n;++i) ++ans[b[p[i]]];
	for(int i=1;i<=n;++i) ans[b[p[i+1]]]+=ans[i];
	for(int i=1;i<=m;++i) cout<<ans[b[i]]<<" ";
	return 0;
}