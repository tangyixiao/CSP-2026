// string by A67dgt027FxdGT54 (luogu user 1417426)

// diff -Z -B 

#include <bits/stdc++.h>
using namespace std;
#define int long long // 10 year OI = GUNMU

int n, a[200005];
char c[200005];

// why did i think kmp first

// the girl on the left of me don't know where the pdf is. 

signed main(signed argc, const char* argv[]){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
	}
	
	int ans = 0, l = 1, r = n, ll = a[1], rr = a[n];
	
	while(l < r){
		if(ll < rr){ // e.g. abbcc
			if(c[l] != c[r]) ans += ll;
			rr -= ll;
			ll = a[++l];
		}
		else if(ll > rr){
			if(c[l] != c[r]) ans += rr;
			ll -= rr;
			rr = a[--r];
		}
		else if(ll == rr){
			if(c[l] != c[r]) ans += ll;
			ll = a[++l];
			rr = a[--r];
		}
	}
	cout << ans;
	
	
}
