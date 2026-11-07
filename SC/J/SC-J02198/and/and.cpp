#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[400005],bitss[40];
vector<ll> pbl;
vector<ll> kl;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld %lld",&n,&m);
	for(int i = 1; i <= n; i++) scanf("%lld",&a[i]);
	for(int i = 1; i <= n; i++){
		ll x=a[i],idx=0;
		while(x){
			bitss[idx++]+=x&1;
			x>>=1;
		}
	}
	ll mx=-114514;
	for(int i = 0; i < 40; i++){
		if(bitss[i]>=m){
			mx=i;
			pbl.push_back(mx);
		}
	}
	if(mx==-114514){
		cout<<0;
		return 0;
	}
	ll ans=0;
	ans+=(1LL<<mx);
	for(int i = 1; i <= n; i++){
		if(a[i]&(1LL<<mx)) kl.push_back(a[i]);
	}
	pbl.pop_back();
//	ll cnt=0;
	while(!pbl.empty()){
//		if(cnt>100){
//			cout<<"LE\n";
//			break;
//		}
//		cout<<"pbl:\n";
//		for(int i = 0; i < pbl.size(); i++) cout<<pbl[i]<<' ';
//		cout<<'\n';
		memset(bitss,0,sizeof bitss);
//		cout<<"kl:\n";
		for(int i = 0; i < kl.size(); i++){
//			cout<<kl[i]<<' ';
			ll idx=0,x=kl[i];
			while(x) {
				bitss[idx++]+=x&1;
				x>>=1;
			}
		}
//		cout<<'\n';
		if(bitss[pbl[pbl.size()-1]]>=m){
			ans+=(1LL<<pbl[pbl.size()-1]);
			vector<ll> kl2;
			for(int i = 0; i < kl.size(); i++){
				if(kl[i]&(1<<pbl[pbl.size()-1])) kl2.push_back(kl[i]);
			}
			kl=kl2;
//			cout<<"nkl:\n";
//			for(int i = 0; i < kl.size(); i++) cout<<kl[i]<<' ';
//			cout<<'\n';
		}
		ll mxx=pbl[pbl.size()-1];
		pbl.clear();
		mx=-114514;
		for(int i = 0; i < mxx; i++){
			if(bitss[i]>=m){
				mx=i;
				pbl.push_back(mx);
			}
		}
		if(mx==-114514) break;
//		cnt++;
	}
	cout<<ans;
	return 0;
}