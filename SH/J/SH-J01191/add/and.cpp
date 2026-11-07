#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[200005];
int main(){	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	if (m == 1){ // ÑùÀý6 
		ll k = 0;
		for (int i = 1; i <= n; i++){
			k = max(k, a[i]);
		}
		cout << k;
		return 0;
	}
	if (m == n){ // ÑùÀý7 
		ll k = 0xffffffffffffffff;
		for (int i = 1; i <= n; i++){
			k &= a[i];
		}
		cout << k;
		return 0;
	}
	if (m == 2){ // ÑùÀý8~10
		ll k = 0;
		for (int i = 1; i <= n; i++){
			for (int j = i + 1; j <= n; j++){
				k = max(a[i] & a[j], k);
			}
		}
		cout << k;
		return 0;
	}
	if (m == n - 1){
		ll k = 0;
		for (int i = 1; i <= n; i++){
			ll c = 0xffffffffffffffff;
			for (int j = 1; j <= n; j++){
				if (j == i) continue;
				c &= a[j];
			}
			k = max(k, c);
		}
		cout << k;
		return 0;
	}
}
