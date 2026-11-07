#include<bits/stdc++.h>
#define ll long long

using namespace std;
const int N = 2e5+5, INF = 1e9, MOD = 2;
ll n, m, ans;
int a[N], b[N][32], c[32], fa[N];
bool vis[N];
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp);
	for (int i = 1; i <= n; i++) {
		fa[i] = a[i];
	}
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		while (a[i]) {
			if (a[i] % 2 == 1) {
				b[i][cnt] = 1;
				c[cnt]++;
			}
			cnt++;
			a[i] /= 2;
		}
	}
	for (int i = 31; i >= 0; i--) {
		ans *= 2;
		if (c[i] >= m) {
			ans++;
			for (int j = 1; j <= n; j++) {
				if (b[j][i] == 0 && !vis[j]) {
					vis[j] = true;
					int wei = i - 1;
					while (wei >= 0) {
						if (b[j][wei] == 1) {
							c[wei]--;
						}
						wei--;
					}
				}
			}
		}
	}
	cout << ans;
	return 0;
}