#include<bits/stdc++.h>
#define i128 __int128
#define ll long long
#define Pii pair<int,int>
#define fi first
#define se second

using namespace std;
const int N=2e5+10;

int n,m,ans,p[N];

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>p[i];
	for(int i=29;i>=0;--i)
	{
		int cnt=0; ans+=1<<i;
		for(int j=1;j<=n;++j) cnt+=(p[j]&ans)==ans;
		if(cnt<m) ans-=1<<i;
	}
	cout<<ans;
	return 0;
}