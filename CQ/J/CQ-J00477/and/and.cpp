#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000005],n,m,ans,f = 1;
void dfs(ll x,ll l,ll s){
	//cout << x << ' ' << l << ' ' << s  << '\n';
	if(x > n){
		ans = max(ans,l);
		return;
	}else if(l <= ans)
		return;
	else if(n - x + 1 == m - s){
		dfs(x+1,l&a[x],s+1);
	}else if(s == m){
		ans = max(ans,l);
		return;	
	}
	else
		dfs(x+1,l,s),dfs(x+1,l&a[x],s+1);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(ll i = 1;i <= n;i ++){
		cin >> a[i];
		if(a[i] != i-1)
			f = 0;
	}
	if(n <= 20){
		dfs(1,1048575,0);
		cout << ans;
	}else 
	if(m == 1){
		ll as = 0;
		for(ll i = 1;i <= n;i ++)
			as = max(as,a[i]);
		cout << as;
	}else if(m == n){
		ll as = 1048575;
		for(ll i = 1;i <= n;i ++)
			as &= a[i];
		cout << as;
	}else if(n <= 2000 && m == 2){
		ll as = 0;
		for(ll i = 1;i <= n;i ++)
			for(ll j = 1;j <= n;j ++){
				if(i != j)
					as = max(as,a[i] & a[j]);
			}
		cout << as;
	}else if(f){
		ll as = 1048575;
		for(ll i = n;i > n-m;i --){
			as &= a[i];
		}
		cout << as;
	}else{
		sort(a + 1,a + n + 1);
		cout << a[n - m + 1];
	}
	return 0;
}


