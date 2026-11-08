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

int a[N];
char c[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n = re;
	for (int i = 1; i <= n; i++) a[i] = re, cin >> c[i];
	int ans = 0, s = 1, t = n;
	while (s < t) {
		if (c[s] != c[t]) {
			if (a[s] > a[t]) ans += a[t], a[s] -= a[t], t--;
			else if (a[s] == a[t]) ans += a[s], s++, t--;
			else ans += a[s], a[t] -= a[s], s++;
		}
		else {
			if (a[s] > a[t]) a[s] -= a[t], t--;
			else a[t] -= a[s], s++;
		}
	}
	wr(ans), endl;
}

