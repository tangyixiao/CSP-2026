#include <bits/stdc++.h>
#define int long long
#define inl_force __attribute__((always_inline)) inline
#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
using namespace std;
template<typename Tp> inl_force Tp input() {
	int x = 0;
	int f = 1;
	char ch = getchar();
	while (!isdigit(ch)) {
		if (ch == EOF)	return 0;
		if (ch == '-')	f = -1;
		ch = getchar();
	}
	while (isdigit(ch)) {
		x = (x << 3) + (x << 1) + (ch - '0');
		ch = getchar();
	}
	return x * f;
}
template<typename Tp> inline void output(Tp x) {
	if (x < 0)	x = -x, putchar('-');
	if (x > 9)	output(x / 10);
	putchar(x % 10 + '0');
}
const int N = 5e5 + 5;
int n, m, a[N], lst[N], pre[N], ans[N];
unordered_map<int, int> mp, mp2;
signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	n = input<int>(), m = input<int>();
	rep(i, 1, n)	a[i] = input<int>();
	rep(i, 1, n) {
		if (mp[a[i]]) {
			lst[i] = mp[a[i]];
			pre[lst[i]] = i;
			mp[a[i]] = i;
		} else {
			mp[a[i]] = i;
		}
	}
	rep(i, 1, n) {
		int j = i; mp.clear();
		while (j <= n) {
			++mp[a[j]];
			if (pre[j])	j = pre[j];
			else	++j;
		}
		for (auto j : mp)	ans[j.first]++;
	} rep(i, 1, m) {
		output(ans[i]);
		if (i != m)	putchar(' ');
	}
	return 0;
}