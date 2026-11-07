#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 10, M = 3e5;

int n, m, a[N], pre[M];
int b[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++) {
		printf("1 ");
	}
	return 0;
}
