/*
Author: kkksc98
关注 kkksc98 谢谢喵
*/
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
const int N = 2e5 + 5;
int n, m, a[N], dp[2][N];
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	n = input<int>(), m = input<int>();
	rep(i, 1, n)	a[i] = input<int>();
	dp[0][0] = dp[1][0] = (1ll << 31) - 1;
	rep(i, 1, n) {
		int cur = (i & 1);
		int lst = (i & 1) ^ 1;
		rep(j, 1, m) {
			dp[cur][j] = max(dp[lst][j], a[i] & dp[lst][j - 1]);
		}
//		cerr << i << ' ';
//		rep(j, 1, m)	cerr << dp[cur][j] << ' ';
//		cerr << '\n';
	}
	output(dp[n & 1][m]);
	return 0;
}
/*
09:36 想到暴力 DP 式子，考虑能否数据结构优化
*/
/*
5 3
31 3 1 15 7
*/