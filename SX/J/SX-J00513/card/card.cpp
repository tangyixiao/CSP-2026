#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
int to[N], ne[N], w[N];
int n, m, a[N], ans[N];
bool mark[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = n; i; i--)
		if (ne[a[i]])
			w[ne[a[i]]]++;
		else { //this val no appear ever
			w[i] = 1;
			ne[a[i]] = i;
			to[i] = ne[a[i + 1]];
			mark[i] = 1;
		}
	for (int i = 1; i <= n; i++)
		if (mark[i]) {
			ans[a[i]] = w[i];
			w[to[i]] += w[i];
		}
	for (int i = 1; i <= m; i++)
		printf("%d ", ans[i]);
	return 0;
}
