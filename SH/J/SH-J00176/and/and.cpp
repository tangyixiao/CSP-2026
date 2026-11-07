#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10;
struct node{
	ll num, step;
	bool operator <(const node &w)const{
		return num > w.num;
	}
};
set<node> dp[N];
ll n,m,a[N];
bool cmp(ll &x, ll &y){
	return x > y;
}
bool check(ll x){
	for(ll i = 1; i <= n; i++){
		for(auto j : dp[i-1]){
			if(j.num && j.step <= m){
				dp[i].insert({j.num,j.step});
				if(j.step == m && j.num >= x){
					return true;
				}
			}
			if((j.num & a[i]) && (j.step+1) <= m){
				dp[i].insert({j.num & a[i],j.step+1});
				if((j.step+1) == m && (j.num & a[i]) >= x){
					return true;
				}
			}
		}
		
//		for(auto j : dp[i]){
//			cout << "i:" << i <<" num:" << j.num << " step:" << j.step << '\n';
//		}
		
		if(a[i]) dp[i].insert({a[i],1});
	}
	ll maxn = -1;
	for(ll i = 1; i <= n; i++){
		for(auto j : dp[i]){
			if(j.step == m) maxn = max(maxn,j.num);
//			cout << "i:" << i <<" num:" << j.num << " step:" << j.step << '\n';
		}
		dp[i].clear();
	} 
	return maxn >= x;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	ll flag13 = true;
	for(ll i = 1; i <= n; i++){
		cin >> a[i];
		ll p = log(a[i]+1) / log(2);
		if((1<<p) != a[i]+1) flag13 = false; 
	}
//	cout << flag13 << '\n';
	if(n <= 22){ //1-5
		ll ans = -1;
		for(ll i = 1; i <= (1<<22)-1; i++){
			ll cnt = 0, res = 0;
			ll nw = 1;
			ll d = i;
			while(d){
				if(d & 1){
					if(!cnt) res = a[nw];
					else res &= a[nw];
					cnt++;
				}
				nw++;
				d >>= 1;
			}
			if(cnt == m) ans = max(ans,res);
		}
		cout << ans << '\n';
		return 0; 
	}
	else if(m == 1){ //6
		cout << *max_element(a+1,a+1+n) << '\n';
		return 0;
	}
	else if(m == n){ //7
		ll ans = a[1];
		for(ll i = 2; i <= n; i++){
			ans &= a[i];
		}
		cout << ans << '\n';
		return 0;
	}
	else if(m == 2){ //8-10
		ll maxn = -1;
		for(ll i = 1; i <= n; i++){
			for(ll j = 1; j < i; j++){
				maxn = max(maxn,a[i] & a[j]);
			}
		}
		cout << maxn << '\n';
		return 0;
	}
	else if(flag13){ //13
		sort(a+1,a+1+n,cmp);
		cout << a[m] << '\n';
		return 0;
	}
	else{
//		ll l = 0, r = *max_element(a+1,a+1+n), ans = 0;
//		while(l < r){
//			ll mid = (l+r) / 2;
////			cout << l << " " << r << " " << mid;
//			if(check(mid)) l = mid+1, ans = mid;
//			else r = mid;
////			cout << " " << check(mid) << '\n';
//		}
//		cout << ans << '\n'; 
	for(ll i = *max_element(a+1,a+1+n); i >= 0; i--){
		if(check(i)){
			cout << i << '\n';
			break;
		}
	}
//	ll d;
//	cin >> d;
//	cout << check(d) << '\n';
	}
	return 0;
}
