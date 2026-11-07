#include <cstdio>
using namespace std;
const int N = 2e5 + 5;
int n, a[N];
char c[N];
long long len, l, r, lt, rt, ans;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for(int i = 1; i <= n; ++ i) {
		scanf("%d %c", &a[i], &c[i]);
		len += a[i];
	}
	l = 1; r = n;
	lt = a[l]; rt = a[r];
	while(l < r) {
		if(lt > rt) {
			if(c[l] != c[r]) ans += rt;
			lt -= rt;
			-- r;
			rt = a[r];
		}
		else if(lt < rt) {
			if(c[l] != c[r]) ans += lt;
			rt -= lt;
			++ l;
			lt = a[l];
		}
		else {
			if(c[l] != c[r]) ans += lt;
			++ l; -- r;
			lt = a[l]; rt = a[r];
		}
	}
	printf("%lld", ans);
	return 0;
}
