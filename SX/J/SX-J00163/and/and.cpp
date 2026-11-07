#include <bits/stdc++.h>
using namespace std;
long long a[200005];

long long s[55];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	long long ans;
	for (int i = 1; i <= 30; i++) {
		s[i] = 2;
	}
	cin >> n >> m;
	for (int i = 2; i <= 30; i++) {
		s[i] *= s[i - 1];
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		for (int j = 1; j <= 30; j++) {
			if (a[i] == s[j])
				a[i] = -1;
		}
	}
	sort(a + 1, a + n + 1, greater<int>());

	long long wer;
	for (int i = 1; i <= n; i++) {
		if (a[i] != -1) {
			ans = a[i];
			wer = i;
			break;
		}
	}
	long long cnt = 0;
	for (int i = wer; i <= n; i++) {
		if (a[i] != -1) {
			ans = ans &a[i];
			cnt++;
			if (cnt == m)
				break;
		}
	}
	cout << ans;
	return 0;
}