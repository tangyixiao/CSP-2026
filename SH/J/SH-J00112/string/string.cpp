#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 4e5+9;
ll n,m = 0,ans = 0;
ll a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(ll i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		m += a[i];
	}
	ll l = 1,lr = a[1];
	ll r = n,rr = a[n];
	while(l < r && r >= 1 && l <= n){
		ll sub = min(lr,rr);
		if(c[l] != c[r])ans += sub;
		lr -= sub;
		rr -= sub;
		if(lr == 0)l++,lr = a[l];
		if(rr == 0)r--,rr = a[r];
	}
	cout << ans << endl;
	return 0;
}
