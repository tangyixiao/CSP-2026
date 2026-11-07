#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[200005],sum[200005];
char c[200005];
ll ans=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(ll i=1ll;i<=n;i++)cin>>a[i]>>c[i],sum[i]=sum[i-1ll]+a[i];
	if(sum[n]==1ll)
	{
		cout<<0;
		return 0;
	}
	if(sum[n]&1ll)
	{
		ll i,x,s=(sum[n]+1ll)>>1ll;
		for(i=1ll;;i++)if(sum[i]>=s)break;
		x=s-sum[i-1ll];
		ll lx=x-1ll,li=i,rx=x+1ll,ri=i;
		if(lx==0ll)lx=a[i-1ll],li=i-1ll;
		if(rx==a[i]+1ll)rx=1ll,ri=i+1ll;
		while(li>0ll&&ri<=n)
		{
			ll c1=lx,c2=a[ri]-rx+1ll;
			if(c1==c2)
			{
				if(c[li]!=c[ri])ans+=c1;
				li--;lx=a[li];ri++;rx=1ll;
			}
			else if(c1<c2)
			{
				if(c[li]!=c[ri])ans+=c1;
				li--;lx=a[li];
				rx+=c1;
			}
			else
			{
				if(c[li]!=c[ri])ans+=c2;
				ri++;rx=1ll;lx-=c2;
			}
		}
		cout<<ans;
	}
	else
	{
		ll i,x,s=sum[n]>>1ll;
		for(i=1ll;;i++)if(sum[i]>=s)break;
		x=s-sum[i-1ll];
		ll lx=x,li=i,rx=x+1ll,ri=i;
		if(lx==0ll)lx=a[i-1ll],li=i-1ll;
		if(rx==a[i]+1ll)rx=1ll,ri=i+1ll;
		while(li>0ll&&ri<=n)
		{
			ll c1=lx,c2=a[ri]-rx+1ll;
			if(c1==c2)
			{
				if(c[li]!=c[ri])ans+=c1;
				li--;lx=a[li];ri++;rx=1ll;
			}
			else if(c1<c2)
			{
				if(c[li]!=c[ri])ans+=c1;
				li--;lx=a[li];
				rx+=c1;
			}
			else
			{
				if(c[li]!=c[ri])ans+=c2;
				ri++;rx=1ll;lx-=c2;
			}
		}
		cout<<ans;
	}
	return 0;
}
