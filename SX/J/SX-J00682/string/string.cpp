#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
pair<ll, char> a[100005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i].first >> a[i].second;
	ll len = 0;
	for (int i = 1; i <= n; i++)
		len += a[i].first;
	ll l2 = len / 2;
	vector < pair<ll, char> > b;
	ll cnt = 0;
	for (int i = n;; i--) {
		if (cnt + a[i].first > l2) {
			a[i].first -= (cnt + a[i].first - l2);
			b.push_back(a[i]);
			break;

		}
		cnt += a[i].first;
		b.push_back(a[i]);
		if (cnt == l2)
			break;
	}
	cnt = 0;
	int k = 1;
	ll cnt2 = 0;
	ll ans = 0;
	for (int i = 0; i < (int)b.size(); i++) {
		cnt2 += b[i].first;
		while (cnt + a[k].first <= cnt2) {
			if (a[k].second != b[i].second) {
				ans += a[i].first;
			}

			cnt += a[k].first;
			k++;
		}
		if (cnt < cnt2)
			a[k].first -= (cnt2 - cnt), ans += (a[k].second == b[i].second ? 0 : cnt2 - cnt);
		cnt = cnt2;
	}
	cout << ans;
	return 0;
}
