#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 2e5 + 5;
ll n, a[MAXN];
char c[MAXN];
ll ans;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i] >> c[i];
	int l = 1, r = n;
	ll fro = 0, bac = 0;
	while(l <= r) {
		if(fro == bac) {
			fro += a[l];
			bac += a[r];
			if(c[l] != c[r]) {
				ans += min(a[l], a[r]);
			}
			l++; r--;
		}else if(fro > bac) {
			if(c[l - 1] != c[r]) {
				ans += min(a[r], fro - bac);
			}
			bac += a[r];
			r--;
		}else {
			if(c[l] != c[r + 1]) {
				ans += min(a[l], bac - fro);
			}
			fro += a[l];
			l++;
		}
	}
	cout << ans;
	return 0;
}
