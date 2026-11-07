#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n, m, mx, sum;
int a[N];
bool vis[N];
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
void solve (int step, int sum) {
	if (step >= m) {
		mx = max (sum, mx);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i]) continue;
		vis[i] = 1;
		int s = sum;
		if (sum == 0) s = a[i];
		else s &= a[i];
		solve (step + 1, s);
		vis[i] = 0;
	}
	return;
}
int main () {
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	n = read (); m = read ();
	for (int i = 1; i <= n; i++) {
		a[i] = read ();
		mx = max (mx, a[i]);
	}
	if (m == 1) {
		cout << mx;
		return 0;
	}
	if (m == n) {
		sum = a[1];
		for (int i = 2; i <= n; i++) sum ^= a[i];
		cout << sum;
		return 0;
	}
	if (m == 2 && n <= 5000) {
		mx = 0;
		int m1, m2;
		for (int i = 1; i <= n; i++) 
			for (int j = 1; j <= n; j++) 
				if (i != j && a[i] ^ a[j] > mx) mx = max (mx, a[i] & a[j]);
	    cout << mx;
	    return 0;
	} 
	else {
		mx = 0;
		solve (0, 0);
		cout << mx;
	}
	return 0;
}
