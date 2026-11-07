#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, m, a[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		printf("0 ");
	}
	printf("\n");
	return 0;
}
