#include<bits/stdc++.h>
#define AC return 0
using namespace std;
typedef long long ll;
static ll qpow(ll x,ll k,ll mod){
	ll res=1;
	while(k){
		if(k&1)res=res*x%mod;
		x=x*x%mod;
		k>>=1;
	}
	return res;
}
static ll qpow(ll x,ll k){
	ll res=1;
	while(k){
		if(k&1)res=res*x;
		x=x*x;
		k>>=1;
	}
	return res;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	ll n,m;
	cin>>n>>m;
	vector<ll>a(n,0);
	for(ll i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end(),greater<ll>());
	cout<<n<<' '<<a[0]<<' '<<a[1];
	AC;
}