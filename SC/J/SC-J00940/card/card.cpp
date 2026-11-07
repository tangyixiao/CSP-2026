#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5;
int n, m;
int a[N], cnt[N], fa[N], p[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; ++i)scanf("%d", &a[i]), ++cnt[a[i]];
	fa[a[n]] = m + 1;
	for (int i = n - 1; i; --i) {
		if(!fa[a[i]]) fa[a[i]] = a[i + 1], p[a[i]] = i;
	}
	for (int i = 1; i <= n; ++i)if(p[a[i]] == i)cnt[fa[a[i]]] += cnt[a[i]];
	for (int i = 1; i <= m; ++i)printf("%d%c", cnt[i], (i == m) ? '\n' : ' ');
	return 0;
}