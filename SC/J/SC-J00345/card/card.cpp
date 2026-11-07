#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5, M = 3e5 + 5;
int n, m;
int a[N], cnt[M];
int p[N], vis[M];
inline int read () {
	int s = 0, f = 1;
	char c = getchar ();
	while (! isdigit (c)) {
		if (c == '-') f = -1;
		c = getchar ();
	}
	while (isdigit (c)) {
		s = (s << 1) + (s << 3) + (c ^ 48);
		c = getchar ();
	}
	return s * f;
}
int main () {
	ios::sync_with_stdio (NULL);
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);
	n = read (); m = read ();
	for (int i = 1; i <= n; i++) a[i] = read ();
	for (int i = 1; i <= n; i++) {
		int pnt = 0;
		for (int j = i; j <= n; j++) {
			++pnt;
			if (vis[a[j]] != 0) {
				for (int k = vis[a[j]]; k < pnt; k++) {
					vis[p[k]] = 0;
					p[k] = -1;
				}
				vis[a[j]] = pnt;
				p[pnt] = a[j];
			} else {
				p[pnt] = a[j];
				vis[a[j]] = pnt;
			}
		}
		for (int j = 1; j <= pnt; j++) 
			if (p[j] != -1) cnt[p[j]]++;
		memset (vis, 0, sizeof vis);
	}
	for (int i = 1; i <= m; i++) cout << cnt[i] << ' ';
	return 0;
}