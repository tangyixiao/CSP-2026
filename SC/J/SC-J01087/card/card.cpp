#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define scf scanf
#define prf printf
#define fu(_zzz_, _l_, _r_) for(auto _zzz_ = _l_; _zzz_ <= _r_; _zzz_++)
#define fd(_zzz_, _l_, _r_) for(auto _zzz_ = _l_; _zzz_ >= _r_; _zzz_--)

int a[500010];
int n, m;
int las[300010];
int ans[300010];

int upd[500010];

signed main(){
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	scf("%d%d", &n, &m);
	fu(i, 1, n){
		scf("%d", &a[i]);
		las[a[i]] = i;
	}
	fd(i, n, 1){
		// i ~ las[a[i]] + 1
		upd[i]++;
	} 
	fu(i, 1, n){
		ans[a[i]] += upd[i];
		upd[las[a[i]] + 1] += upd[i];
	}
	fu(i, 1, m){
		prf("%d%c", ans[i], (i == m) ? '\n' : ' ');
	}
	
	return 0;
}