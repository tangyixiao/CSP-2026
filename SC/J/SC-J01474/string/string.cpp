#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using db = double;
using ull = unsigned long long;
using cll = const long long;
cll N = 2e5 + 5;
struct node{
	ll a;
	str c;
} a[N];
ll n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n;
	ll cnt = 0;
	for (ll i = 1; i <= n; i ++) {
		cin >> a[i].a >> a[i].c;
		cnt += a[i].a;
	}
	ll ans = 0;
	ll l = 1, r = n;
	while (1) {
		if (l == r || l > r) {
			cout << ans << '\n';
			return 0;
		}
		if (a[l].a == 0) {
			l ++;
		}
		if (a[r].a == 0) {
			r --;
		}
		if (a[l].c != a[r].c) {
			ans += min(a[l].a, a[r].a);
			if (a[l].a >= a[r].a) {
				a[l].a -= a[r].a;
				a[r].a = 0;
				r --;
			}
			else {
				a[r].a -= a[l].a;
				a[l].a = 0;
				l ++;
			}
		}
		else {
			if (a[l].a >= a[r].a) {
				a[l].a -= a[r].a;
				a[r].a = 0;
				r --;
			}
			else {
				a[r].a -= a[l].a;
				a[l].a = 0;
				l ++;
			}
		}
	}
	return 0;
}
