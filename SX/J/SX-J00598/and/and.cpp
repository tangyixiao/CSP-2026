#include <bits/stdc++.h>
using namespace std;
int n, m, v;
int a[10005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= m; j++) {
			v = a[i] and a[i + 1];
		}
	}
	return 0;
}
