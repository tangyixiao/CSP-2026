// card by A67dgt027FxdGT54 (luogu user 1417426)

#include <bits/stdc++.h>
using namespace std;
#define int long long // 10 year OI = GUNMU

// will i ak?

// nya nya gu lu gu lu 

// too difficult. 

int n, m, a[500005], cnt[300005], ans[300005];

// no.

// gei ta le

// expected 100 + 100 + 100 + 0 = 300

bool search(int i){
	if(ans[a[i]] != 0) {
		if(i != 1){
			ans[a[i]] += cnt[a[i]] + ((b)?0:ans[a[i-1]]);
			;
		}
		return true;
	}
	if(i == 1){
		ans[a[i]] = 1;
		return false;
	}
	bool b = search(i-1);
	ans[a[i]] = cnt[a[i]] + ((b)?0:ans[a[i-1]]);
	return false;
}

signed main(signed argc, const char* argv[]){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	// fk.
	
	// maybe i can?
	
	cin >> n >> m;
	
	for(int i=1;i<=n;i++){
		cin >> a[i];
		cnt[a[i]]++;
	}
	
	;
	for(int i=n;i>=1;i--){
		search(i);
	}
	
	for(int i=1;i<=m;i++) cout << ans[i] - 1 << " "; 
	
}

