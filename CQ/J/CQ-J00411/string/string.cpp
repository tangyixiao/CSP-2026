#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+5;
ll a[N],sum[N];
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,ans=0; cin >>n;
	for (ll i=1;i<=n;i++) {cin >>a[i]>>c[i];sum[i]=sum[i-1]+a[i];}
	for (ll i=1;i<=n;i++)
	{
//		if (sum[i-1]*2>sum[n]) continue;
		ll L=sum[n]-sum[i]+1,R=sum[n]-sum[i-1];
//		cout <<L<<' '<<R<<'\n'; 
		ll l=1,r=n,ans1=0,ans2=0;
		while (l<=r)
		{
			ll mid=(l+r)>>1;
			if (sum[mid]>=L) r=mid-1,ans1=mid;
			else l=mid+1;
		}
		l=1,r=n;
		while (l<=r)
		{
			ll mid=(l+r)>>1;
			if (sum[mid]>=R) r=mid-1,ans2=mid;
			else l=mid+1;
		}
		ll cnt=a[i];
//		cout <<ans1<<' '<<ans2<<'\n';
		for (ll j=ans1;j<=ans2;j++)
		{
			if (c[j]==c[i]) cnt-=(min(R,sum[j])-max(L,sum[j-1]+1)+1);
		}
		ans+=cnt;
	 } 
	 cout <<ans/2;
	return 0;
 }
 // sum[n]-sum[i]+1~sum[n]-sum[i-1]
 /*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
