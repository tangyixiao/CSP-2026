#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int n,m;
ll a[200005];
ll ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		for(int i=1;i<=n;i++) ans = max(ans,a[i]);
		cout<<ans<<'\n';
	}else if(m==n){
		ans = a[1];
		for(int i=2;i<=n;i++) ans &= a[i];
		cout<<ans<<'\n';
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans = max(ans,a[i]&a[j]);
			}
		}
		cout<<ans<<'\n';
	}else{
		for(int mask=0;mask<(1<<n);mask++){
			if(__builtin_popcount(mask) == m){
				ll cur = (1LL<<31)-1;
				for(int i=0;i<n;i++){
					if(mask & (1<<i)) cur&=a[i+1];
				}
				ans = max(ans,cur);
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}

