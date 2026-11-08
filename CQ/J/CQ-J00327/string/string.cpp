#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 200005;
int n;
struct node {
	int a;
	char c;
} b[N];
ll ans;
int main () {
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	scanf ("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf ("%d %c", &b[i].a, &b[i].c);
	}
	int l = 1, r = n;
	while (l < r) {
//		cerr << l << ' ' << r << '\n';
//		printf ("LL: %d %c  RR: %d %c\n", b[l].a, b[l].c, b[r].a, b[r].c);
		if (b[l].c == b[r].c) {
			if (b[l].a > b[r].a) {
				b[l].a -= b[r].a;
				r--;
			}
			else if (b[l].a < b[r].a) {
				b[r].a -= b[l].a;
				l++;
			}
			else {
				l++;
				r--;
			}
		}
		if (b[l].c != b[r].c) {
			if (b[l].a > b[r].a) {
				ans = ans + 1ll * b[r].a;
				b[l].a -= b[r].a;
				r--;
			}
			else if (b[l].a < b[r].a) {
				ans = ans + 1ll * b[l].a;
				b[r].a -= b[l].a;
				l++;
			}
			else {
				ans = ans + 1ll * b[r].a;
				l++;
				r--;
			}
		}
	}
	printf ("%lld\n", ans);
	return 0;
}
