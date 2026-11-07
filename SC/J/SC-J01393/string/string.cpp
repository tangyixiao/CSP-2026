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
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	ll t,x,sizes=0,times=0;
	string s;
	cin>>t;
	while(t--){
		cin>>x;
		sizes+=x;
		char w;
		cin>>w;
		for(ll i=0;i<x;i++)s.push_back(w);
	}
	ll limitt=ceil(static_cast<double>(sizes/2));
	if(sizes%2)limitt++;
	for(ll i=limitt,j=limitt-2;i<sizes,j>=0;i++,j--){
		if(s[i]!=s[j])times++;
	}
	cout<<times;
	AC;
}