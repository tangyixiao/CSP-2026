/*
Author: kkksc98
关注 kkksc98 谢谢喵
*/
#include <bits/stdc++.h>
#define int long long
#define inl_force __attribute__((always_inline)) inline
#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define per(i, a, b) for (int i = (a); i >= (b); --i)
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
int n, ans, sum, id_L, id_R, a[N];
char c[N];
struct Segment {
	int cnt;
	char c;
} L[N], R[N];
inl_force void solve() {
	int now_sum = 0;
	int LIM = (sum >> 1);
	rep(i, 1, n) {
		if (now_sum + a[i] >= LIM) {
			L[++id_L].cnt = LIM - now_sum;
			L[id_L].c = c[i];
			a[i] -= (LIM - now_sum);
			now_sum = LIM;
			break;
		} else {
			L[++id_L].cnt = a[i];
			L[id_L].c = c[i];
			now_sum += a[i];
			a[i] = 0;
		}
	}
	per(i, n, 1) {
		if (a[i] == 0)	break;
		R[++id_R].cnt = a[i];
		R[id_R].c = c[i];
		a[i] = 0;
	}
	for (int i = 1, j = 1; i <= id_L && j <= id_R; ++i) {
		while (L[i].cnt > 0) {
			if (L[i].cnt >= R[j].cnt) {
				if (L[i].c != R[j].c)	ans += R[j].cnt;
				L[i].cnt -= R[j++].cnt;
			} else {
				if (L[i].c != R[j].c)	ans += L[i].cnt;
				R[j].cnt -= L[i].cnt;
				L[i].cnt = 0;
			}
		}
	}
	return ;
}
inl_force void solve_now() {
	int now_sum = 0;
	int LIM = (sum >> 1);
	rep(i, 1, n) {
		if (now_sum + a[i] > LIM) {
			L[++id_L].cnt = LIM - now_sum;
			L[id_L].c = c[i];
			a[i] -= ((LIM - now_sum) + 1);
			now_sum = LIM;
			break;
		} else if (now_sum + a[i] == LIM) {
			L[++id_L].cnt = LIM - now_sum;
			L[id_L].c = c[i];
			a[i] -= (LIM - now_sum);
			--a[i + 1];
			break;
		} else {
			L[++id_L].cnt = a[i];
			L[id_L].c = c[i];
			now_sum += a[i];
			a[i] = 0;
		}
	}
	per(i, n, 1) {
		if (a[i] == 0)	break;
		R[++id_R].cnt = a[i];
		R[id_R].c = c[i];
		a[i] = 0;
	}
	for (int i = 1, j = 1; i <= id_L && j <= id_R; ++i) {
		while (L[i].cnt > 0 && j <= id_R) {
			if (L[i].cnt >= R[j].cnt) {
				if (L[i].c != R[j].c)	ans += R[j].cnt;
				L[i].cnt -= R[j++].cnt;
			} else {
				if (L[i].c != R[j].c)	ans += L[i].cnt;
				R[j].cnt -= L[i].cnt;
				L[i].cnt = 0;
			}
		}
	}
	return ;
}
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	n = input<int>();
	rep(i, 1, n) {
		a[i] = input<int>();
		c[i] = getchar();
		sum += a[i];
	}
	if (sum % 2 == 0)	solve();
	else	solve_now();
	output(ans);
	return 0;
}
/*
09:12 写完准备测样例
09:16 样例 WA 了
09:24 重新写完
09:27 样例 3 WA 了
09:28 重测样例
09:30 样例通过
*/