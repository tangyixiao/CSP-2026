#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], s[200005];
long long t[30], sz, t1[30], t2[30], ans;
char c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c;
		t[c - 'a' + 1] += a[i];
		sz += a[i];
		s[i] = c - 'a' + 1;
	}
	if (sz % 2 == 0) {
		long long sz1 = 0, tp = 0;
		for (int i = 1; i <= n; i++) {
			t1[s[i]] += a[i];
			sz1 += a[i];
			if (sz1 >= sz / 2) {
				tp = i + 1;
				t2[s[i]] += sz1 - sz / 2;
				t1[s[i]] -= sz1 - sz / 2;
				break;
			}
		}
		for (int i = tp; i <= n; i++)
			t2[s[i]] += a[i];
		for (int i = 1; i <= 26; i++) {
			if (t1[i] - t2[i] > 0)
				ans += t1[i] - t2[i];
		}
		cout << ans;
	} else {
		long long sz1 = 0, tp = 0;
		for (int i = 1; i <= n; i++) {
			t1[s[i]] += a[i];
			sz1 += a[i];
			if (sz1 > sz / 2) {
				tp = i + 1;
				t2[s[i]] += sz1 - sz / 2;
				t2[s[i]]--;
				t1[s[i]] -= sz1 - sz / 2;
				break;
			} else if (sz1 == sz / 2) {
				tp = i + 1;
				t2[s[tp]]--;
				break;
			}
		}
		for (int i = tp; i <= n; i++)
			t2[s[i]] += a[i];
		for (int i = 1; i <= 26; i++) {
			if (t1[i] - t2[i] > 0)
				ans += t1[i] - t2[i];
		}
		cout << ans;
	}

	return 0;
}
