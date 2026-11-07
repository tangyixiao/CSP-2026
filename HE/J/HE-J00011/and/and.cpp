#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000005];
bool cmp(ll a,ll b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m;
	ll ans=0;
	ll temp=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			temp=(a[i]&a[j]);
			ans=max(temp,ans);
		}
	}
	if(m==1){
		sort(a+1,a+1+n,cmp);
		ans=a[1];
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=(ans&a[i]);
		}
	}
	cout<<ans; 
	return 0;
}
