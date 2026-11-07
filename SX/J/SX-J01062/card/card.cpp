#include <bits/stdc++.h>
using namespace std;
const int N = 5 * 1e5, M = 3 * 1e5;
int a[N], cnt[M], w[M];
bool b[M];
map<int, int> mp;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		memset(b, 0, sizeof(b));
		memset(w, 0, sizeof(w));
		for (int j = i; j <= n; j++) {
			int k = a[j];
			if (b[k] == 0) {
				b[k] = 1;
				w[k] = 1;
				mp[k] = j;
			}

			else {
				for (int t = mp[k]; t < j; t++) {
					b[a[t]] = 0;
					w[a[t]] = 0;
				}
				w[k] = 1;
				b[k] = 1;
				mp[k] = j;
			}
		}
		for (int j = 1; j <= m; j++) {
			if (w[j] == 1)
				cnt[j]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << cnt[i] << " ";
	return 0;
}