#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll a[200005];
bitset<200005>vis;
ll f(ll x){
	x|=x>>1;x|=x>>2;x|=x>>4;x|=x>>8;x|=x>>16;
	return x+1>>1;
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	ll x=0;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		x=max(x,f(a[i]));
	}
	ll s=0;
	for(;x;x>>=1){
		ll cnt=0;
		for(ll i=1;i<=n;i++){
			if((a[i]&x)&&!vis[i])cnt++;
		}
		if(cnt>=m){
			for(ll i=1;i<=n;i++){
				if(!vis[i]&&!(a[i]&x))vis[i]=1;
			}
			s+=x;
		}
	}
	cout<<s;
	return 0;
}

