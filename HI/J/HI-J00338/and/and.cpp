#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n, m, ans, maxx;
ll a[200005];
void dfs(ll b, ll k, ll i){
	if(k>=m){
		ans=max(ans, b);
		return;
	}else if(i>n){
		return;
	}
	dfs(b&a[i], k+1, i+1);
	dfs(b, k, i+1);
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(ll i=1;i<=n;i++){
		cin >> a[i];
		maxx=max(a[i], maxx);
	}
	if(n<=20){
		for(ll i=2;i<=n;i++){
			dfs(a[i-1], 1, i);
		}
	}
	if(m==1){
		ans=maxx;
	}
	if(m==2){
		for(ll i=1;i<=n;i++){
			for(ll j=i+1;j<=n;j++){
				ans=max(ans, i&j);
			}
		}
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=(ans&i);
		}
	}
	cout << ans;
	return 0;
}
