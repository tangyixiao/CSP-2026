#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[200005],ans,cnt,vis[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
	for(ll i=30;i>=0;i--)
	{
		cnt=0;
		ll k=(1<<i);
		for(ll j=1;j<=n;j++) if((a[j]&k)&&vis[j]==0) cnt++;
		if(cnt>=m)
		{
			ans+=k;
			for(ll j=1;j<=n;j++) if(!(a[j]&k)) vis[j]=1;
		}
	}
	cout<<ans;
	return 0;
}
