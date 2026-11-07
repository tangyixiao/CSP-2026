#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, h;

struct nb {
	ll shu;
	char c;
} a[200010];
ll ans;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i].shu);
		cin >> a[i].c;
		h += a[i].shu;
	}
	ll mid = h / 2, he = 0;
	ll r = n;
	ll l = 1;
	while (he <= mid && l < r) {
		he += min(a[l].shu, a[r].shu);
		if (a[l].c != a[r].c) {
			if (a[l].shu < a[r].shu) {
				a[r].shu -= a[l].shu;
				ans += a[l].shu;
				l++;
			} else if (a[l].shu > a[r].shu) {
				a[l].shu -= a[r].shu;
				ans += a[r].shu;
				r--;
			} else {
				ans += a[r].shu;
				r--;
				l++;
			}
		} else {
			if (a[l].shu < a[r].shu) {
				a[r].shu -= a[l].shu;
				l++;
			} else if (a[l].shu > a[r].shu) {
				a[l].shu -= a[r].shu;
				r--;
			} else {
				r--;
				l++;
			}
		}
	}
	printf("%lld", ans);
	return 0;
}
