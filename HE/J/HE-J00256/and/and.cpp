#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,ans6=INT_MIN+1,ans7=pow(2,20)-1,ans8=INT_MIN+1,ans13=INT_MIN+1,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	if(m==1){
		for(ll i=1;i<=n;i++){
			ll a;
			cin>>a;
			if(a>ans6)ans6=a;
		}
		cout<<ans6;
		return 0;
	}
	if(m==n){
		for(ll i=1;i<=n;i++){
			ll a;
			cin>>a;
			ans7&=a;
		}
		cout<<ans7;
		return 0;
	}
	if(m==2){
		ll a[n+1];
		for(ll i=1;i<=n;i++){
			cin>>a[i];
		}
		for(ll i=1;i<=n;i++){
			for(ll j=1;j<i;j++){
				if(a[i]&a[j]>ans8)ans8=a[i]&a[j];
			}
		}
		cout<<ans8;
		return 0;
	}
	if(m<=n){
		bool B=true;
		for(ll i=1;i<=n;i++){
			ll a;
			cin>>a;
			if(a>ans13)ans13=a;
			if(a!=i-1)B=false;
		}
		if(B){
			cout<<n-1;
			return 0;
		}
		cout<<ans13;
		return 0;
	}
	ll a[n+1];
	bool bl[n+1]={false};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ans=a[1];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(ans&a[j]>ans&&!bl[j]){
				bl[j]=1;
				ans&=a[j];
			}
		}
	}
	cout<<ans;
	return 0;
}
