#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,ans;
int a[N];char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i)cin>>a[i]>>c[i];
	for(int l=1,r=n;l<r;)
	{
		int mn=min(a[l],a[r]);
		ans+=mn*(c[l]!=c[r]);
		a[l]-=mn,a[r]-=mn;
		while(l<=n&&a[l]==0)++l;
		while(r>0&&a[r]==0)--r;
	}
	cout<<ans<<"\n";
	return 0;
}