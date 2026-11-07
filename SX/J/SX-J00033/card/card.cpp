#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
#define int long long
int a[500005];
bool f[500005];
int id[500005];
int cnt[500005];
int v[500005];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int cur = 1;
		memset(f, false, sizeof(f));
		memset(a, 0, sizeof(a));
		memset(id, 0, sizeof(id));
		memset(v, 0, sizeof(v));
		for (int j = i; j <= n; j++) {
			if (f[a[j]] == true) {
				for (int k = id[a[j]] + 1; k <= cur; k++) {
					f[v[k]] = false;
					id[v[k]] = 0;
					v[k] = 0;
				}
				cur = id[a[j]];
			}
			v[cur] = a[j];
			f[a[j]] = true;
			id[a[j]] = cur;
			cur++;
		}
		for (int j = 1; j < cur; j++) {
			cnt[v[j]]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << cnt[a[i]] << " ";
	}
	return 0;
}