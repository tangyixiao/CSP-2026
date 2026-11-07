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
int n, ans;
int a[N];
char c[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	n = read();
	for (int i = 1; i <= n; ++i) {
		a[i] = read();
		cin >> c[i];
	}
	
	int i = 1, j = n;
	while (i < j) {
		if (c[i] != c[j]) {
			ans += min(a[i], a[j]);
		}
		if (a[i] >= a[j]) {
			a[i] -= a[j];
			a[j] = 0;
			--j;
			if (a[i] == 0) ++i;
		} else {
			a[j] -= a[i];
			a[i] = 0;
			++i;
			if (a[j] == 0) --j;
		}
	}
	
	write(ans);
	putchar('\n');
	
	return 0;
	
} 
