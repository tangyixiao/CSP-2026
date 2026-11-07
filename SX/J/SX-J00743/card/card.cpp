#include <bits/stdc++.h>

using namespace std;
const int N = 5e5+10, M = 3e5+10;
typedef long long ll;

struct A {
	int l, r;
} pir[N];

int n, m, a[N];
int last[M];
ll sum;

ll ans[N];
ll res[M];

bool cmp(A x, A y) {
	return x.l < y.l;
}

map<int, bool> q;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (last[a[i]] == 0) {
			last[a[i]] = i;
		} else {
			sum++;
			pir[sum].l = last[a[i]];
			pir[sum].r = i;
			last[a[i]] = i;
		}
	}

	sort(pir + 1, pir + sum + 1, cmp);

	for (int i = 1; i <= n; i++) {
		q.clear();
		if (i - 1 >= 1) {
			ans[1]--;
			ans[i]++;
		}
		int st = -1;
		for (int j = 1; j <= sum; j++) {
			if (pir[sum].l >= i)
				st = sum;
		}

		if (st == -1)
			continue;

		for (int j = st; j <= sum; j++) {
			if (q[pir[j].l] == 0) {
				ans[pir[j].l]--;
				ans[pir[j].r]++;
				for (int k = pir[j].l; k < pir[j].r; k++)
					q[k] = 1;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		ans[i] += ans[i - 1];
		res[a[i]] = max(res[a[i]], n + ans[i]) ;
	}
	for (int i = 1; i <= m; i++)
		cout << res[i] << " ";
	return 0;
}
