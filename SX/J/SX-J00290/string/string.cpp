#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;
const int N=2e5+5;
ll n,a[N],ans;
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	ll l=1,r=n;
	while(l<=r)
	{
		if(c[l]==c[r])
			if(a[l]>a[r]) a[l]-=a[r],a[r]=0;
			else if(a[r]>a[l]) a[r]-=a[l],a[l]=0;
			else a[l]=a[r]=0;
		else
		{
			ans+=min(a[l],a[r]);
			if(a[l]>a[r]) a[l]-=a[r],a[r]=0;
			else if(a[r]>a[l]) a[r]-=a[l],a[l]=0;
			else a[l]=a[r]=0;
		}
		if(a[l]==0) l++;
		if(a[r]==0) r--;
	}
	cout<<ans;
	return 0;
}
