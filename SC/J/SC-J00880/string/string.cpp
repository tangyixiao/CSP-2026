#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+5; 
ll n,a[N],cnt;
char b[N];
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
		cin>>a[i]>>b[i];
	}
	ll l=1,r=n;
	while(l<r)
	{
		ll t=min(a[l],a[r]);
		if(b[l]!=b[r])cnt+=t;
		a[l]-=t;
		a[r]-=t;
		if(a[l]==0)l++;
		if(a[r]==0)r--;
	}
	cout<<cnt;
	return 0;
}