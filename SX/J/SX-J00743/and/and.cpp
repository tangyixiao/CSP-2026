#include <bits/stdc++.h>

using namespace std;
const int N = 2e5+10;
typedef long long ll;
ll n, m, a[N];
bool sol[N][40], mei[40];
ll sum[N];
int tot;

int ans[N], flag;
int backup[N];
int copy_flag;

ll res;

void fen(ll x, ll ci) {

	tot = 0;
	while (x != 0) {
		if (x % 2) {
			mei[tot] = 1;
		} else {
			mei[tot] = 0;
		}
		tot++;
		x /= 2;
	}
	sum[ci] = tot;

	for (int i = tot - 1; i >= 0; i--) {
		if (mei[i])
			sol[ci][i] = 1;
	}
	return;
}

bool dfs(int x) {
	if (x == -1)
		return 0;
	memcpy(backup, ans, sizeof ans);
	copy_flag = flag;
	flag = 0;
	for (int i = 1; i <= copy_flag; i++) {
		if (sol[backup[i]][x]) {
			flag++;
			ans[flag] = backup[i];
		}
	}

	if (flag > m) {
		return dfs(x - 1);
	} else if (flag == m) {
		return 1;
	} else {
		memcpy(ans, backup, sizeof backup);
		flag = copy_flag;
		return 0;
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ans[i] = i;
		fen(a[i], i);
	}
	flag = n;

	for (int i = 32; i >= 0; i--) {
		if (dfs(i)) {
			break;
		}
	}

	res = a[ans[1]];
	for (int i = 2; i <= flag; i++) {
		res &= a[ans[i]];
	}
	cout << res;
	return 0;
}
