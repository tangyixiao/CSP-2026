#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
ll n,a[N],ans;
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	ll l=1,r=n;
	while(l<r)
	{
		ll num=0;
		while(num<a[l])
		{
			ll nd=min(a[l]-num,a[r]);
			if(c[l]!=c[r]) ans+=nd;
			num+=nd,a[r]-=nd;
			if(a[r]==0) r--;
		}
		l++;
	}
	cout<<ans;
	return 0;
}
