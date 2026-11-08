#include <bits/stdc++.h>
#define ll long long
using namespace std;
string a[1000005];
ll c[1000005];
const ll N = 1e9;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,s = 0;
	cin >> n;
	for(ll i = 1;i <= n;i ++){
		cin >> c[i] >> a[i];
		s += c[i];
	}
	if(s <= N){
		string f = "";
		ll ans = 0;
		for(ll i = 1;i <= n;i ++)
			for(ll j = 1;j <= c[i];j ++)
				f += a[i];
		for(ll i = 0,j = s - 1;i <= j;i ++,j --){
			if(f[i] != f[j])
				ans ++;
		}
		cout << ans;
	}else{
		ll l = 1,r = n,ans = 0;
		while(l < r){
			if(a[l] != a[r]){
				ans += min(c[l],c[r]);
				if(c[l] < c[r])
					c[r] -= c[l],l ++;
				else 
					c[l] -= c[r],r --;
			}else{
				if(c[l] < c[r])
					c[r] -= c[l],l ++;
				else 
					c[l] -= c[r],r --;
			}
		}
		cout << ans;
	}
	return 0; 
	
}

