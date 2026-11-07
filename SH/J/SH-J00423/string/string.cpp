#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+10;
ll n,a[maxn],ans;
char c[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	ll l=1,r=n;
	while(l<r){
		ll x=min(a[l],a[r]);
//		cout<<l<<" "<<r<<" "<<a[l]<<" "<<a[r]<<" "<<x;
//		cout<<ans;
		if(c[l]!=c[r])
			ans+=x;
		a[l]-=x;
		a[r]-=x;
		if(a[l]==0)
			l++;
		if(a[r]==0)
			r--;
	}
	cout<<ans<<endl;
	return 0;
}
