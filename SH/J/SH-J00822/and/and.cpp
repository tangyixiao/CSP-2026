#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+10;
ll a[N];
bool rsv[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,ans=0,m;
	cin >> n >> m;
	for(ll i=1;i<=n;i++){
		cin >> a[i];
		rsv[i]=true;
	}
	for(ll i=30;i>=0;i--){
		ll cnt=0;
		for(ll j=1;j<=n;j++){
			if((a[j]&(1<<i))!=0&&rsv[j]){
				cnt++;
			} 
		}
		if(cnt>=m){
			ans+=(1<<i);
			for(ll j=1;j<=n;j++){
				if((a[j]&(1<<i))==0){
					rsv[j]=false;
				} 
			}
		}
	}
	cout << ans << "\n";
	return 0;
}
