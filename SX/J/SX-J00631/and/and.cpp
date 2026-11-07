#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int a[10000];
	int n;
	int m;
	int o = 0;
	cin >> n >> m;
	cin >> a[n];
	for (int i = 1; i < n; i++) {
		if (o <= a[i] and a[i + 1]) {
			o = a[i] and a[i + 1];
		}
	}
	cout << o;
	return 0;
}