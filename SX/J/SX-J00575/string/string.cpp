#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, l = 0;
char f;
pair<int, char> a[200005];
map<char, int> cnt1, cnt2;

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;

	bool same = 1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].first >> a[i].second;
		l += a[i].first;
	}

	f = a[1].second;
	for (int i = 2; i <= n; i++) {
		if (a[i].second != f) {
			same = 0;
			break;
		}
	}

	if (same) {
		cout << 0;
		return 0;
	}

	l = ceil(l * 1.0 / 2);
	int cur = 0, lst, lstind = 0;

	bool haslast = 0, sp = 0;
	for (int i = 1; i <= n; i++) {
		if (cur + a[i].first <= l - 1) {
			cur += a[i].first;
			cnt1[a[i].second] += a[i].first;
		}

		else {
			lst = l - 1 - cur;
			cnt1[a[i].second] += lst;
			haslast = 1;
			lstind = i;
			break;
		}

		if (cur + 1 == l) {
			sp = 1;
		}
	}

	if (haslast) {
		cnt2[a[lstind].second] += a[lstind].first - lst;
		if (sp)
			cnt2[a[lstind].second]--;
	}

	for (int i = lstind + 1; i <= n; i++)
		cnt2[a[i].second] += a[i].first;

	for (char i = 'a'; i <= 'z'; i++) {
		cout << cnt1[i] << " " << cnt2[i] << " " << endl;
	}

	int ans = 0;
	for (char i = 'a'; i <= 'z'; i++) {
		int c1 = cnt1[i], c2 = cnt2[i];
		ans += abs(c2 - c1);
	}

	cout << ans / 2 << endl;
	return 0;
}

/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
