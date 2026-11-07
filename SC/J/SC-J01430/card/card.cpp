#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
int n, m, a[N], last[N], d[N], cnt[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		last[a[i]] = i;
		d[i] = 1;
	}
	for (int i = 1; i <= n; ++i) {
		d[i] += d[i - 1];
		if (i != last[a[i]]) {
			d[last[a[i]]] += d[i];
			d[i] -= d[i];
		}
	}
	for (int i = 1; i <= n; ++i) cnt[a[i]] += d[i];
	for (int i = 1; i <= m; ++i) printf("%d%c", cnt[i], " \n"[i == m]);
	fflush(stdout); fclose(stdin), fclose(stdout);
	return 0;
}
