#include<bits/stdc++.h>
#define int long long
using namespace std;

inline int read() {
	int x = 0, k = 1;
	char c = getchar();
	while (c < '0' || c > '9') {
		if (c == '-') k = -1;
		c = getchar();
	}
	while (c >= '0' && c <= '9') {
		x = (x << 1) + (x << 3) + (c ^ 48);
		c = getchar();
	}
	return x * k;
}

inline void write(int x) {
	if (x < 0) {
		putchar('-');
		x = -x;
	}
	if (x >= 10) write(x / 10);
	putchar(x % 10 + '0');
	return;
}

const int N = 2e5 + 50;
int n, m, maxn;
int a[N];
bool last[N];
bool use[N];
bool ok[N][40];
bool ans[40];
int wjl;

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	n = read(), m = read();
	for (int i = 1; i <= n; ++i) {
		a[i] = read();
		int now = 1;
		while (a[i]) {
			if (a[i] & 1) ok[i][now] = true;
			a[i] >>= 1;
			++now;
		}
		--now;
		maxn = max(maxn, now);
		last[i] = true;
	}
	
	for (int i = maxn; i >= 1; --i) {
		int s = 0;
		for (int j = 1; j <= n; ++j) {
			if (last[j]) {
				if (ok[j][i]) {
					++s;
					use[j] = true;
				}
				else use[j] = false;
			}
		}
		if (s >= m) {
			for (int j = 1; j <= n; ++j) {
				last[j] = use[j];
			}
			ans[i] = true;
		}
	}
	
	int now = 1;
	for (int i = 1; i <= maxn; ++i) {
		if (ans[i]) wjl += now;
		now <<= 1;
	}
	
	write(wjl);
	putchar('\n');
	return 0;
	
} 
