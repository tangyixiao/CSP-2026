#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+10;
ll n,x;
struct S{
	ll v;
	char c;
}a[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i].v>>a[i].c;
	}
	
	ll l=1,r=n;
	ll ans=0;
	while(r>l)
	{
		if(a[l].c!=a[r].c)
		{
			ans+=min(a[l].v,a[r].v);
		}
		ll MIN=min(a[l].v,a[r].v);
		a[l].v-=MIN;
		a[r].v-=MIN;
		if(a[l].v==0)
		{
			l++;
		}
		if(a[r].v==0) r--;
	}
	cout<<ans;
	return 0;
}