#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
ll a[N];
ll ans=LLONG_MIN;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;cin>>n>>m;
	for(ll i=0;i<n;++i){
		cin>>a[i];
	}
	if(m==1){
		for(ll i=0;i<n;++i){
			ans=max(ans,a[i]);
		}
		cout<<ans<<'\n';
		//return 0;
	}
	else if(m==2){
		for(ll i=0;i<n;++i){
			for(ll j=i;j<=n;++j){
				ans=max(a[i]&a[i+1],ans);
			}
		}cout<<ans<<'\n';
		//return 0;
	}
	else if(m==n){
		ans=a[0];
		for(ll i=1;i<n;++i){
			ans=ans&a[i];
		}
		cout<<ans<<'\n';
		
	}
	else if(m==n-1){
		ll ans1[200005];
//		ans=a[0];
//		for(int i=1;i<n;++i){
//			ans=ans&a[i];
//		}
		for(ll i=0;i<n;++i){
			for(ll j=0;j<n;++i){
				ans1[i]=a[0];
				if(i==0){
					ans1[i]=a[1];
					j=2;
					ans1[i]&=a[j];
				}
				if(j==i){
					ans1[i]&=a[j+1];
					++j;
				}
				else ans1[i]&=a[j];
			}
			if(i>0){
				ans1[i]=max(ans1[i],ans1[i-1]);
			}
		}cout<<ans1[m]<<'\n';//zheliyouwenti,tiaobuchulaile,meishijianleqwq
		//return 0;
	}else{
		for(ll i=0;i<n;++i){
			for(ll j=i;j<=n;++j){
				ans=max(a[i]&a[i+1],ans);
			}
		}cout<<ans<<'\n';
		//return 0;
	}
	
	return 0;
}
