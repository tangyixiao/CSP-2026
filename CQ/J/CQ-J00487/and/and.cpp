#include <bits/stdc++.h>
#define re read()
#define wr(x) write(x)
#define sp putchar(' ')
#define endl puts("")
#define int long long

const int N = 5e5 + 10, INF = 0x3f3f3f3f;

using namespace std;

int read() {
	int y = 0, f = 1;
	char c = getchar();
	while (c < '0' || c > '9') f = c == '-' ? -1 : f, c = getchar();
	while (c >= '0' && c <= '9') y = (y << 1) + (y << 3) + (c ^ 48), c = getchar();
	return y * f;
}

void write(int x) {
	if (x < 0) x = -x, putchar('-');
	if (x > 9) write(x / 10);
	putchar(x % 10 + 48);
}

int a[N], b[N];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n = re, m = re;
	for (int i = 1; i <= n; i++) a[i] = re;
	int ans = 0;
	for (int j = 29; j >= 0; j--) {
		int len = 0;
		for (int i = 1; i <= n; i++) if ((a[i] >> j) & 1) b[++len] = a[i];
		if (len >= m) {
			ans += (1 << j);
			for (int i = 1; i <= len; i++) a[i] = b[i];
			n = len;
		}
	}
	wr(ans), endl;
}

