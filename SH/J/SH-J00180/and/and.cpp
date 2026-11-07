#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<cstdio>
using ll=long long;
ll pop_count(ll x){
	ll num=0;
	while(x>0){
		++num;
		x&=x-1;
	}
	return num;
}
ll solveBF(ll n,ll m,std::vector<ll>a){
	ll ans=0;
	for(ll status=0;status<(1LL<<n);++status){
		if(pop_count(status)==m){
			ll sum=(1ULL<<63)-1;
			for(ll i=0;i<n;++i){
				if(status&(1LL<<i)){
					sum&=a[i];
				}
			}
			ans=std::max(ans,sum);
		}
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	std::cin>>n>>m;
	std::vector<ll>a(n);
	for(ll i=0;i<n;++i){
		std::cin>>a[i];
	}
	if(n<=20){
		std::cout<<solveBF(n,m,a);
	}
	else if(m==1){
		std::cout<<*std::max_element(a.begin(),a.end()); 
	}
	else if(m==2){
		ll ans=0;
		for(ll i=0;i<n;++i){
			for(ll j=i+1;j<n;++j){
				ans=std::max(ans,a[i]&a[j]);
			}
		}
		std::cout<<ans;
	}
	else if(a[0]<=4){
		std::vector<ll>cnt(5);
		for(ll i=0;i<n;++i){
			++cnt[a[i]];
		}
		if(cnt[4]>=m){
			std::cout<<4;
		}else if(cnt[3]>=m){
			std::cout<<3;
		}else if(cnt[2]+cnt[3]>=m){
			std::cout<<2;
		}else if(cnt[1]+cnt[3]>=m){
			std::cout<<1;
		}else{
			std::cout<<0;
		}
	}
	else{
		std::sort(a.begin(),a.end(),std::greater<ll>{});
		ll ans=(1ULL<<63)-1;
		for(ll i=0;i<m;++i){
			ans&=a[i];
		}
		std::cout<<ans;
	}
	return 0;
}
