#include <bits/stdc++.h>
using namespace std;
bool vis[200005];
int n, m, maxn;
long long a[200005], dp[2005][2005], ansans;
struct st{
	int w, idx;
}cnt[200005];
bool cmp(st x, st y) {
	if (x.w != y.w) {
		return x.w > y.w;
	}
	return a[x.idx] > a[y.idx];
}
void fun(int step, long long sss) {
	if (step == m + 1) {
		ansans = max(ansans, sss);
		return ;
	}
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			vis[i] = 1;
			fun(step + 1, sss & a[i]);
			vis[i] = 0;
		}
	}
}
int main() {
	freopen("ans.in", "r", stdin);
	freopen("ans.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] > a[maxn]) {
			maxn = i; 
		}
		int x = a[i];
		cnt[i].idx = i;
		while (x) {
			cnt[i].w += x & 1;
			x >>= 1;
		}
	}
	if (m == 1) {
		cout << a[maxn];
		return 0;
	} else if (m == 2) {
		long long maxx = 0;
		for (int i = 1; i <= n; i++) {
			if ((a[maxn] & a[i]) > maxx && i != maxn) {
				maxx = a[maxn] & a[i];
			}
		}
		cout << maxx;
		return 0;
	} else if (m == n) {
		long long ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans &= a[i];
		}
		cout << ans;
		return 0;
	} else if (n <= 20) {
		for (int i = 1; i <= n; i++) {
			vis[i] = 1;
			fun(2, a[i]);
			vis[i] = 0;
		}
		cout << ansans;
	} else {
		sort (cnt + 1, cnt + n + 1, cmp);
		int ans111 = a[cnt[1].idx];
		for (int i = 2; i <= m; i++) {
			ans111 &= a[cnt[i].idx];
		}
		cout << ans111;
	}
	return 0;
}
