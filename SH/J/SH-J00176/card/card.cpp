#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e4+10;
ll n,m,a[N],cnt[N],res[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for(ll i = 1; i <= n; i++){
		cin >> a[i];
	}
	if(n <= 10000){
		for(ll i = 1; i <= n; i++){
			memset(cnt,0,sizeof(cnt));
			for(ll j = i; j <= n; j++){
				if(cnt[a[j]]){
					for(ll k = cnt[a[j]]; k <= j; k++) cnt[a[k]] = 0;
				}
				cnt[a[j]] = j;
			}
			for(ll j = 1; j <= m; j++){
				if(cnt[j]) res[j]++/*, cout << i << " : " << j << '\n'*/;
			}
		}
		for(ll i = 1; i <= m; i++){
			cout << res[i];
			if(i != m) cout << " ";
		}
		return 0;
	}
	else if(m <= 2 && n > 5){
		
	}
	return 0;
} 
