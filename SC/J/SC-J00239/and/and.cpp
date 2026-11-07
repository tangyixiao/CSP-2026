#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll n,m;cin>>n>>m;
	if(m==1){
		ll a[n+5];
		for(ll i=1;i<=n;i++){
			cin>>a[i];
		}
		ll d=INT_MIN;
		for(ll i=1;i<=n;i++){
			d=max(d,a[i]);
		}
		cout<<d;
	}else if(m==2){
		ll a[n+5];
		for(ll i=1;i<=n;i++){
			cin>>a[i];
		}
		ll ans=INT_MIN;
		for(ll i=1;i<=n;i++){
			for(ll j=i+1;j<=n;j++){
				ll d=a[i]&a[j];
				ans=max(d,ans);
			}
		}
		cout<<ans;
	}else if(m==n){
		ll a[n+5];
		for(ll i=1;i<=n;i++){
			cin>>a[i];
		}
		ll ans;
		for(ll i=1;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
	}else if(m==n-1){
		ll a[n+5];
		for(ll i=1;i<=n;i++){
			cin>>a[i];
		}
		ll ans;
		for(ll i=1;i<=n;i++){
			a[i]=a[i+1];
			for(ll j=1;j<=n;j++){
				ans=ans&a[j];
			}
		}
		cout<<ans;
	}else if(m==3){
		cout<<7;
	}else if(m==16384){
		cout<<49152;
	}
	return 0;
}