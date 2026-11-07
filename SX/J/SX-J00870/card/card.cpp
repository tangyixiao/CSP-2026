#include <bits/stdc++.h>
using namespace std;
long long n, m, o, h;
long long a[500010];
long long t[300010];
long long b[500010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%lld %lld", &n, &m);
	for (long long i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	for (long long i = 1; i <= n; i++) {
		o = 0;
		memset(b, 0, sizeof(b));
		for (long long j = i ; j <= n; j++) {
			o++;
			h = o;
			for (long long k = 1; k < o; k++) {
				if (b[k] == a[j]) {
					h = k;
					break;
				}
			}
			o = h;
			b[o] = a[j];
		}
		for (long long j = 1; j <= o; j++) {
			t[b[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		printf("%lld ", t[i]);
	}
	return 0;
}

