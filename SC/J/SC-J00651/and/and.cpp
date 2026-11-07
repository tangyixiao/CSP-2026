#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2005;
ll dp[N][N][2];
ll a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m,mx=-1,pre;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i==1)pre=a[i];
		else pre&=a[i];
		mx=max(a[i],mx);
	}
	if(m==1){
		cout<<mx;
	}else if(m==n){
		cout<<pre;
	}else if(m==2){
		ll ans=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}
	return 0;
}