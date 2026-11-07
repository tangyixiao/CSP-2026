#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, m, a[200003], x = 2147483647, f[2003][2003], c0 = 0, c1 = 0, c2 = 0, c3 = 0;
bool aa = 1, bb = 1, cc = 1;

int check(ll k){
	int p = 1;
	for(int i = 1; i <= 31; i++){
		if(p == k) return 1;
		if(k == p - 1) return 2;
		p *= 2;
	}
	return 0;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(a[i] != i - 1) bb = 0;
		if(check(a[i]) != 2 && a[i] != 1) aa = 0;
		if(a[i] >= 4) cc = 0;
		if(a[i] == 0) c0++;
		if(a[i] == 1) c1++;
		if(a[i] == 2) c2++;
		if(a[i] == 3) c3++;
	}
	sort(a + 1, a + n + 1);
	reverse(a + 1, a + n + 1);
	//cout << aa << bb << cc;
//	if(n <= 2000){
//		for(ll i = 1; i <= 2001; i++){
//			f[i][0] = 0;
//			for(int j = 1; j <= 2001; j++){
//				f[i][j] = x;
//			}
//		}
//		f[1][1] = a[1];
//		for(ll i = 1; i <= n; i++){
//			for(int j = 1; j <= min(i, m); j++){
//				f[i][j] = f[i - 1][j];
//				if(j >= )
//			}
//		}
//		cout << f[n][m];
//		return 0;
//	}
	if(m == 1){
		cout << a[1];
		return 0;
	}
	else if(m == n){
		ll ans = x;
		for(int i = 1; i <= n; i++){
			ans &= x;
		}
		cout << ans;
		return 0;
	}
	else if(m == 2){
		ll ans = -1;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(i != j){
					ans = max(ans, a[i] & a[j]);
				}
			}
		}
		cout << ans;
		return 0;
	}
	else if(aa || (bb && check(n) == 1)){
		ll ans = x;
		for(int i = 1; i <= m; i++){
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	else if(cc){
		ll ans = x;
		if(c3 >= m) ans = 3;
		else if(c3 + c2 >= m) ans = 2;
		else if(c3 + c1 >= m) ans = 1;
		else ans = 0;
		cout << ans;
		return 0;
	}
	else cout << 0;
	return 0;
}
