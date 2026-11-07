#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;

struct pos {
	ll a, c;
};
int n;
ll a[N];
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	ll sum = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%lld %c", a + i, c + i);
		sum += a[i];
	}
	pos l = {1, 1}, r = {n, a[n]};
	ll cnt = 0;
	while (l.a < r.a) {
		if (a[l.a] - l.c + 1 >= r.c) {
			if (c[l.a] != c[r.a]) {
				cnt += r.c;
			}
			l.c += r.c;
			r.a--;
			r.c = a[r.a];
		} else {
			if (c[l.a] != c[r.a]) {
				cnt += a[l.a] - l.c + 1;
			}
			r.c = r.c - a[l.a] + l.c - 1;
			l.a++;
			l.c = 1;
		}
	}
	printf("%lld", cnt);
	return 0;
}
