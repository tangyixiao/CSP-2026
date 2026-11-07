#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
struct chuan{
	int l;
	char c;
}a[N];
long long ans;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d %c", &a[i].l, &a[i].c); 
	int i = 1, j = n;
	while (i < j) {
		int op;
		if (a[i].c == a[j].c) op = 0;
		else op = 1;
		if (a[i].l > a[j].l) {
			a[i].l -= a[j].l;
			ans += 1ll * op * a[j].l;
			j--;
		} else if (a[i].l < a[j].l) {
			a[j].l -= a[i].l;
			ans += 1ll * op * a[i].l;
			i++;
		} else {
			ans += 1ll * op * a[j].l;
			i++;
			j--;
		}
	}
	printf("%lld", ans);
	return 0;
}
