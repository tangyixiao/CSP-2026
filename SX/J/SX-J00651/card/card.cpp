#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5, M = 3e5+5;
int n, m;
int a[N];
int a_end[M], cnt[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.in", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		a_end[a[i]] = i;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			j = a_end[a[j]];
			cnt[a[j]]++;
		}
	}
	for (int i = 1; i <= m; i++)
		printf("%d ", cnt[i]);
	return 0;
}