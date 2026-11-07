#include <bits/stdc++.h>
using namespace std;
#define maxn 200005
int n, m, a[maxn];
inline int read() {
	int x = 0, f = 1;
	char c = getchar();
	while (c < '0' || c > '9') {
		if (c == '-')f = -1;
		c = getchar();
	}
	while (c >= '0' && c <= '9') {
		x = x * 10 + (c - '0');
		c = getchar();
	}
	return x * f;
}
int f[maxn];
void solve() {
	n = read(), m = read();
	for (int i = 1; i <= n; i++) a[i] = read(), f[i] = a[i];
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i++)
		for (int j = m; j >= 0; j--)
			f[j] = max(f[j], f[j - 1] & a[i]);
	printf("%d",f[n]);
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	solve();
	return 0;
}