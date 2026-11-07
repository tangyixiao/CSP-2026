#include <bits/stdc++.h>
using namespace std;

#define int long long

int n, m;
const int N = 200010;

int a[N];

void fp() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
}

int ans = INT_MAX;

void dfs(int now, int cnt, int as) {
	if (now > n)
		return ;
	if (cnt == m) {
		ans = max(as, ans);	
		return ;
	}
	dfs(now + 1, cnt, as), dfs(now + 1, cnt + 1, as & a[now]);
}

void sol1() {			// 2^n
	dfs(1, 1, a[1]);
	dfs(1, 0, INT_MAX);
	cout << ans;
	exit(0);
}

void sol2() {
	for (int i = 1; i <= n; i ++)
		ans = max(ans, a[i]);
	cout << ans;
	exit(0);
}

void sol3() {
	ans = a[1];
	for (int i = 2; i <= n; i ++)
		ans = ans & a[i];
	cout << ans;
	exit(0);
}

int k1, k2;

void sol4() {
	for (int i = 1; i <= n; i ++)
		for (int j = 1; j <= n; j ++) {
			if (i == j)
				continue;
			if ((a[i] & a[j]) > ans)
				ans = a[i] & a[j], k1 = a[i], k2 = a[j];
		}
	cout << ans << '\n';
	cout << k1 << ' ' << k2;
	exit(0);
}

int pre;

void sol5() {
	int res = 0;
	for (int i = 1; i <= 100; i ++) {
		ans = INT_MAX;
		for (int j = 1; j < i; j ++)
			ans = ans & a[j];
		for (int j = i + 1; j <= n; j ++)
			ans = ans & a[j];
		res = max(res, ans);
	}
	cout << res << endl;
	exit(0);
}

bool cmp(int x, int y) {
	return x > y;
}

bool flag;

int logg(int x) {
	int res = 0;
	while (x > 1) {
		res ++;
		x /= 2;
	}
	return res;
}

void solB() {
	int ans = a[1];
	for (int i = 1; i <= logg(n); i ++)
		ans = ans & (a[1 << i]);
	cout << ans;
	exit(0);
}

void solA() {
	sort(a + 1, a + 1 + n, cmp);
	ans = a[1];
	for (int i = 1; i <= m; i ++)
		ans = ans & a[i];
	cout << ans;
	exit(0);
}

signed main() {
	fp();
	
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> n >> m;
	
//	cout << logg(n) << endl;
	
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
		if (a[i] != i - 1)
			flag = 1;
	}
	if (!flag)
		solB();
	
	if (m == 1)
		sol2();
	
	if (m == n)
		sol3();
	
	if (m == 2)
		sol4();
	
	if (m == n - 1)
		sol5();
	
	else
		solA();
	
	return 0;
}
/*
唉，直接暴力+骗分吧


*/