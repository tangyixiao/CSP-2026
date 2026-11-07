#include <cstdio>
using namespace std;
const int N = 200005;
int n;
int a[N];
char c[N];
int h, t;
long long ans;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d %c", &a[i], &c[i]);
	h = 1; t = n;
	while (h <= t && 1 <= h && h <= n && 1 <= t && t <= n) {
		if (a[h] > a[t]) {
			if (c[h] != c[t]) ans += a[t];
			a[h] -= a[t], t--;
		} else if (a[h] < a[t]){
			if (c[h] != c[t]) ans += a[h];
			a[t] -= a[h], h++;
		} else {
			if (c[h] != c[t]) ans += a[h];
			h++, t--;
		}
	}
	printf("%lld", ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
} 