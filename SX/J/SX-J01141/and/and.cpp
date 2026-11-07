#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, m, a[200010];

long long maxn = LLONG_MIN;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	if (m == 1) {
		cout << *max_element(a + 1, a + n + 1);
	} else if (m == 2) {
		maxn = LLONG_MIN;
		for (int i = 1; i <= n; i++)
			for (int j = i + 1; j <= n; j++)
				maxn = max(maxn, 1ll * a[i] & a[j]);
		cout << maxn << endl;
	} else {
		maxn = LLONG_MIN;
		for (int i = 1; i <= n; i++)
			for (int j = i + 1; j <= n; j++)
				for (int k = j + 1; k <= n; k++)
					maxn = max(maxn, 1ll * a[i] & a[j] & a[k]);
		cout << maxn << endl;
	}
}