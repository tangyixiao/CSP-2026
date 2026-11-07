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
struct sets{
	string cx,wz;
};
bool is_hw_string(string x){
	string y=x;
	reverse(x.begin(),x.end());
	if(x==y)return 1;
	return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	ll n,m,cnt=1;
	cin>>n>>m;
	vector<ll>a(n,0);
	for(ll i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end(),greater<ll>());
	cnt=a[0];
	for(ll i=1;i<m;i++){
		cnt=cnt&a[i];
	}
	cout<<cnt;
	AC;
}