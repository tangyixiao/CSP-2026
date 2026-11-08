#include <iostream>

using namespace std;
typedef long long ll;

const int N = 2e5 + 5;
int n, m, a[N], b[N], ans;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 29; i >= 0; i--) {
		int cnt = 0;
		for (int j = 1; j <= n; j++)
			if (a[j] & (1 << i))
				cnt++;
		if (cnt < m) continue;
		int idx = 0;
		for (int j = 1; j <= n; j++)
			if (a[j] & (1 << i))
				b[++idx] = a[j];
		for (int j = 1; j <= idx; j++)
			a[j] = b[j];
		n = idx;
		ans += (1 << i);
	}
	cout << ans << '\n';
	return 0;
}
