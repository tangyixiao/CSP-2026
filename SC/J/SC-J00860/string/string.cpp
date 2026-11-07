#include<bits/stdc++.h>
#define i128 __int128
#define ll long long
#define Pii pair<int,int>
#define fi first
#define se second

using namespace std;
const int N=2e5+10;

int n,p[N]; ll ans; char c[N];

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0)->sync_with_stdio(0);
	cin>>n; int l=1,r=n;
	for(int i=1;i<=n;++i) cin>>p[i]>>c[i];
	while(l<r)
	{
		if(p[l]<p[r]) ans+=p[l]*(c[l]!=c[r]),p[r]-=p[l],++l;
		else if(p[l]>p[r]) ans+=p[r]*(c[l]!=c[r]),p[l]-=p[r],--r;
		else ans+=p[l]*(c[l]!=c[r]),++l,--r;
	}
	cout<<ans;
	return 0;
}