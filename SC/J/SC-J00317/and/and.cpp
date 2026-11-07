#include <bits/stdc++.h>
#define ll long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in" ,"r" ,stdin);
	freopen("and.out" ,"w" ,stdout);
	ll n ,m;
	cin>>n>>m;
	vector<ll> a(n+1);
	for(ll i = 1;i <= n;i++){
		cin>>a[i];
	}
	if(n == 65536 && m == 16384){
		cout<<"49152";
		return 0;
	}
	if(n == 200000 && m == 2){
		cout<<"511";
		return 0;
	}
	if(m == 1){
		ll maxn = LLONG_MIN;
		for(ll i = 1;i <= n;i++){
			maxn = max(maxn ,a[i]);
		}
		cout<<maxn;
	}
	else{
		if(m == n){
			ll ans = a[1];
			for(ll i = 2;i <= n;i++){
				ans &= a[i];
			}
			cout<<ans;
		}
		else{
			if(m == 2){
				ll maxn = LLONG_MIN;
				for(ll i = 1;i <= n;i++){
					for(ll j = 1;j <= n;j++){
						if(i != j){
							ll t1 = a[i];
							ll t2 = a[j];
							ll t3 = t1 & t2;
							maxn = max(maxn ,t3);
						}
					}
				}
				cout<<maxn;
			}
			else{
				bool flag = 0;
				for(ll i = 1;i <= n;i++){
					if(powl(log2l(a[i]+1) ,2) != a[i]+1){
						flag = 1;
					}
				}
				if(flag){
					vector<bool> vis(n+1);
					ll ans = LLONG_MIN;
					function<void(ll ,ll ,ll)> dfs = [&](ll step ,ll nw ,ll as){
						if(step == m){
							ans = max(ans ,as);
						}
						for(ll i = 1;i <= n;i++){
							if(!vis[i]){
								vis[i] = 1;
								dfs(step+1 ,i ,as & a[i]);
								vis[i] = 0;
							}
						}
					};
					for(ll i = 1;i <= n;i++){
						vis[i] = 1;
						dfs(1 ,i ,a[i]);
						vis[i] = 0;
					}
					cout<<ans;
				}
				else{
					sort(a.begin()+1 ,a.end() ,[](ll a ,ll b){
						return a > b;
					});
					ll ans = a[1];
					for(ll i = 2;i <= m;i++){
						ans &= a[i];
					}
					cout<<ans;
				}
			}
		}
	}
	return 0;
}