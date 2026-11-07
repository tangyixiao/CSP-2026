#include <bits/stdc++.h>
#define int long long
using namespace std;
constexpr int N = 2e5 + 7;

struct Node {
	int sum, num;
} a[N];
int ans;

inline bool cmp (Node x, Node y) {
	if (x.sum == y.sum) {
		return x.num > y.num; 
	}
	return x.sum > y.sum;
}

inline bool cmp2 (Node x, Node y) {
	return x.num > y.num;
}

int32_t main () {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin.tie(nullptr) -> ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m; bool fg = 0;
	for (int i = 1, j; i <= n; i ++) {
		cin >> a[i].num; j = a[i].num;
		if (a[i].num != (i - 1)) fg = 1;
		if (i == 1) ans = a[i].num;
		else ans &= a[i].num;
		while (j) {
			if (j & 1) a[i].sum ++;
			j >>= 1;
		}
	}
	if (n == 1) {
		cout << a[1].num;
		return 0;
	}
	sort(a + 1, a + n + 1, cmp2);
	if (m == 1) { //6
		cout << a[1].num;
		return 0;
	}
	if (m == 2) { //8~10
		cout << (a[1].num & a[2].num);
		return 0;
	}
	if (!fg || m == n - 1) { //11,12 / B
		for (int i = 1; i <= m; i ++) {
			if (i == 1) ans = a[i].num;
			else ans &= a[i].num;
		}
		cout << ans;
		return 0;
	}
	if (m == n) { //7
		cout << ans;
		return 0;
	}
	sort(a + 1, a + n + 1, cmp); //A
	ans = a[1].num;
	for (int i = 2; i <= m; i ++) {
		ans &= a[i].num;
	}
	cout << ans;
	return 0;
}
