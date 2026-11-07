#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
const int M = 3e5+10;
long long a[N], n, m, b[M], l, r;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++) {
		for (int j = i; j <= n; j++) {
			b[j]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << b[i] << " ";
	}
	return 0;
}