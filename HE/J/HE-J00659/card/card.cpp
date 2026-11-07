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

const int N = 5e5 + 50;
int n, m;
int a[N];
bool ok_a = true;
int ans[N];
int last_wei[N];
int before[N];
int cun[N];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	n = read(), m = read();
	for (int i = 1; i <= n; ++i) {
		a[i] = read();
		if (i != 1 && a[i] < a[i - 1]) ok_a = false;
		if (last_wei[a[i]] > 0) before[i] = last_wei[a[i]];
		last_wei[a[i]] = i;
	}
	
	if (ok_a) {
		for (int i = 1; i <= n; ++i) {
			ans[a[i]] = ans[a[i - 1]] + 1;
		}
		for (int i = 1; i <= m; ++i) {
			write(ans[i]), putchar(' ');
		}
		return 0;
	}
	
	if (m == 1) {
		write(n);
		return 0;
	}
	
	for (int i = 0; i <= n; ++i) {
		for (int j = i + 1; j <= n; ++j) {
			if (before[j] > 0 && cun[a[j]] >= 1) {
				for (int k = before[j]; k <= j - 1; ++k) {
					cun[a[k]] = 0;
				}
			}
			++cun[a[j]];
		}
		for (int j = 1; j <= m; ++j) {
			if (cun[j] > 0) ++ans[j];
			cun[j] = 0;
		}
	}
	
	for (int i = 1; i <= m; ++i) {
		write(ans[i]), putchar(' ');
	} 
	return 0;
	
} 
