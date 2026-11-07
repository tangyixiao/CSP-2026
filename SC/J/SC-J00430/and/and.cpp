#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,h=0;
ll a[2000005];
bool f[2000005];

ll get_bit(ll num,ll i){
	return (num&(1<<i))>>i;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	memset(f,1,sizeof f);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		h=max(h,__lg(a[i]));
	}
	ll ans=0;
	for(ll i=h;i>=0;i--){
		ll cnt=0;
		for(ll j=1;j<=n;j++){
			if(get_bit(a[j],i)&&f[j])cnt++;
		}
		if(cnt>=m){
			ans+=(1<<i);
			for(ll j=1;j<=n;j++){
				if(!get_bit(a[j],i))f[j]=0;
			}
		}
	}
	cout<<ans;
	return 0;
}
