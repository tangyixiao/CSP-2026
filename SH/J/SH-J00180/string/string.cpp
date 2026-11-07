#include<iostream>
#include<vector>
#include<cstdio>
using ll=long long;
#define min(x,y) (x<y?x:y)
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	std::cin>>n;
	std::vector<ll>a;
	std::vector<char>c;
	for(ll i=0;i<n;++i){
		ll x;
		char y;
		std::cin>>x>>y;
		if(i!=0&&y==c.back()){
			a.back()+=x;
		}else{
			a.push_back(x);
			c.push_back(y);
		}
	}
	if(a.size()<=1){
		std::cout<<0;
		return 0;
	}
	ll ans=0;
	for(ll l=0,r=a.size()-1;l<=r;){
		while(a[l]>0&&l<=r){
			ll mn=min(a[l],a[r]);
			if(c[l]!=c[r]){
				ans+=mn;
			}
			a[l]-=mn;
			a[r]-=mn;
			if(a[r]==0){
				--r;
			}
		}
		++l;
		while(a[r]>0&&l<=r){
			ll mn=min(a[l],a[r]);
			if(c[l]!=c[r]){
				ans+=mn;
			}
			a[l]-=mn;
			a[r]-=mn;
			if(a[l]==0){
				++l;
			}
		}
		--r;
	}
	std::cout<<ans;
	return 0;
}
